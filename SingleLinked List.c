#include<stdio.h>
 struct node
{
int data;
struct node *next;
} *head = NULL, *ptr, *new;

int main ()
{
  int ch;
  void insert_beg ();
  void insert_end ();
  int insert_pos ();
  void display ();
  void delete_beg ();
  void delete_end ();
  int delete_pos ();

while (1)
{
printf ("\n\n---- Singly Linked List(SLL) Menu ----");
printf ("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
printf ("Enter your choice(1-4):");
scanf ("%d", &ch);
switch (ch)
{
case 1:
printf ("\n---- Insert Menu ----");
printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
printf ("\n\nEnter your choice(1-4):");
scanf ("%d", &ch);
switch (ch)
{
case 1:  	      insert_beg ();
  		      break;
case 2:	      insert_end ();
		     break;
case 3:	      insert_pos ();
		      break;
case 4:	      exit (0);
default:	      printf ("Wrong Choice!!");
}
break;
case 2:	  display ();
	   break;
case 3:	  printf ("\n---- Delete Menu ----");
printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified  position\n4.Exit");
printf ("\n\nEnter your choice(1-4):");
scanf ("%d", &ch);
switch (ch)
	{
	case 1:	      delete_beg ();
	      	       break;
	case 2:	      delete_end ();
	      	       break;
case 3:	      delete_pos ();
	      	       break;
case 4:	      exit (0);
default:	      printf ("Wrong Choice!!");
	 }
	 break;
case 4:
	  exit (0);
default:
	  printf ("Wrong Choice!!");
}}
return 0;}

void insert_beg ()
{
int num;
 new = (struct node *) malloc (sizeof (struct node));
 printf ("Enter data:");
 scanf ("%d", &num);
 new->data = num;
 if (head == NULL)		//If list is empty
    {
 	new->next = NULL;
      	head = new;
    }
  else
   {
  	new->next = head;
      	head = new;
    }
}

void insert_end ()
{
  int num;
  new = (struct node *) malloc (sizeof (struct node));
  printf ("Enter data:");
  scanf ("%d", &num);
  new->data = num;
  new->next = NULL;
  if (head == NULL)		//If list is empty
    {
 	head = new;
    }
  else
    {
  	ptr = head;
      	while (ptr->next != NULL)
	ptr = ptr->next;
      	ptr->next = new;
    }
}

int insert_pos ()
{
int pos, i, num;
if (head == NULL)
     {
      printf ("List is empty!!");
      return 0;
      }
 new = (struct node *) malloc (sizeof (struct node));
 printf ("Enter data:");
 scanf ("%d", &num);
 printf ("Enter position to insert:");
 scanf ("%d", &pos);
 new->data = num;


ptr = head;
for (i = 1; i < pos - 1; i++)
{
  if (ptr->next == NULL)
{
printf ("There are less elements!!");
	  	return 0;
	}
 ptr = ptr->next;
 }
 new->next = ptr->next;
  ptr->next = new;
  return 0;
}

void display ()
{
if (head == NULL)
    {
printf ("List is empty!!");
    }
  else
    {
  	ptr = head;
      	printf ("The linked list is:\n");
      	while (ptr != NULL)
	{
printf ("%d->", ptr->data);
	  	ptr = ptr->next;
	}
    }
}


void delete_beg ()
{
  if (head == NULL)
      {
  printf ("The list is empty!!");
       }
  else
      {
  	ptr = head;
      	head = head->next;
      	printf ("Deleted element is %d", ptr->data);
      	free (ptr);
}
}




void delete_end ()
{
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            new = ptr;
            ptr = ptr ->next;
        }
        new->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}



int delete_pos ()
{
  int pos, i;
  if (head == NULL)
      {
  	printf ("List is empty!!");
      	return 0;
       }
printf ("Enter position to delete:");
scanf ("%d", &pos);
 ptr = head;
 for (i = 1; i < pos - 1; i++)
     {
 	if (ptr->next == NULL)
		{
			printf ("There are less elements!!");
	  		return 0;
		}
      ptr = ptr->next;
    }
new = ptr->next;
ptr->next = new->next;
printf ("Deleted element is %d", new->data);
free (new);
return 0;
}

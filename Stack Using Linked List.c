#include<stdio.h>
struct node
{
  int val;
  struct node *next;
}*top=NULL, *new;
int choice;
void push(void);
void pop(void);
void display(void);
int main()
{
    Mainmenu: printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    while(1)
    {
        printf("\nEnter the Choice:");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4:{printf("Thank you...");
             exit(0);}
        break;
        default: printf("\nEnter a valid choice");
        goto Mainmenu;
        }
        }
            return 0;
    }

    void pop()
    {
        int item;
        if(top==NULL)
            printf("\nUnderflow");
        else
        {
            item=top->val;
            new=top;
            top=top->next;
            free(new);
            printf("\nItem(%d) popped", item);
        }



    }
    void push()
    {
        int num;
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL)
            printf("not able to pop elements");
        else
        {
            printf("\nEnter the value");
            scanf("%d", &num);
            if(top==NULL)
            {
                ptr->val=num;
                ptr->next=top;
                top=ptr;
            }
            else
            {
                ptr->val=num;
                ptr->next=top;
                top=ptr;
            }
            printf("\n Item(%d) pushed", num);
        }

    }
    void display()
    {
        int i;
        struct node *new;
        new=top;
        if(new==NULL)
            printf("Stack is empty\n");
        else
        {
            printf("\n Stack elements are ...\n");
            while(new!=NULL)
            {
                printf("%d\n", new->val);
                new=new->next;
            }
        }
    }





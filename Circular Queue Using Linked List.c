#include <stdio.h>
    struct node
    {
        int data;
        struct node *neat;
    }*front=-1, *rear=-1;
    void enqueue(int a)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=a;
        newnode->neat=0;
        if(rear==-1)
        {
            front=rear=newnode;
            rear->neat=front;
        }
        else
        {
            rear->neat=newnode;
            rear=newnode;
            rear->neat=front;
        }
    }

    void dequeue()
    {
        struct node *temp;
        temp=front;
        if((front==-1)&&(rear==-1))
        {
            printf("\nQueue is empty");
        }
        else if(front==rear)
        {
            front=rear=-1;
            free(temp);
        }
        else
        {
            front=front->neat;
            rear->neat=front;
            free(temp);
        }
    }

    int peek()
    {
        if((front==-1) &&(rear==-1))
        {
            printf("\nQueue is empty");
        }
        else
        {
            printf("\nThe front element is %d", front->data);
        }
    }

    void display()
    {
        struct node *temp;
        temp=front;
        printf("\n The elements in an Queue are : ");
        if((front==-1) && (rear==-1))
        {
            printf("Queue is empty");
        }

        else
        {
            while(temp->neat!=front)
            {
                printf("%d,", temp->data);
                temp=temp->neat;
            }
            printf("%d", temp->data);
        }
    }

    void main()
    {
        int choice=1,x;

        while(choice<4 && choice!=0)
        {
        printf("\n Press 1 : Insert an element");
        printf("\nPress 2  : Delete an element");
        printf("\nPress 3  : Display the element");
         printf("\nPress 4  : Display front element");

        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch(choice)
        {

            case 1:

            printf("Enter the element which is to be inserted");
            scanf("%d", &x);
            enqueue(x);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            case 4:
                peek();

        }
        }
        return 0;
    }


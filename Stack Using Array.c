#include<stdio.h>
int stack[100],n, choice,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\nEnter Size of Stack[MAX=100]:");
    scanf("%d", &n);
    Mainmenu: printf("\n1.PUSh\n2.POP\n3.DISPLAY\n$.EXIT\n");
    do
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
        case 4: printf("\n Exit");
        break;
        default: printf("\nEnter a valid choice");
        goto Mainmenu;
        }
        }while(choice!=4);
            return 0;
    }

    void pop()
    {
        if(top<=-1)
            printf("\n Stack is underflow");
        else

        {
            printf("\n The popped element is %d", stack[top]);
            top--;
        }
    }
    void push()
    {
        if(top>=n-1)
            printf("\n Stack is over flow");
        else

        {
            printf("\n Enter the value to be pushed:");
            scanf("%d", &x);
            top++;
            stack[top]=x;
        }
    }
    void display()
    {
        if(top>=0)
           {
               printf("\n the element in stack");
               for(i=top; i>=0; i--)
                printf("\n%d", stack[i]);
        printf("\nEnter next choice");
           }
        else

        {
            printf("\n Stack is empty");

    }

}

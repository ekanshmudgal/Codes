#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

int stack[size];
int top = -1;

    void push(int value)
    {
        if (top == size-1)
        {
            printf("\n---------Overflow--------\n");
        }
        else
        {
            top = top+1;
            stack[top] = value;
            printf("\n\n-----Value is inserted-----\n\n");
        }
    }

    void pop()
    {
        if(top == -1)
        {
            printf("\n-----Underflow-----\n");
        }
        else
        {
            printf("\n\n-----%d is DELETED-----\n\n", stack[top]);
            top = top-1;
        }
    }

    void display()
    {
        if(top == -1)
        {
            printf("\n-----Underflow-----\n");
        }
        else
        {
            printf("\n\n-----STACK ELEMENTS-----\n\n");
            for(int i=0; i<=top; i++)
            {
                printf("%d\n", stack[i]);
            }printf("\n");
        }
    }


void main()
{
    int value, choice;
    
    while (1)
    {
        printf("-----CHOICES-----\n");
        printf("1\tPUSH\n2\tPOP\n3\tDISPLAY\n\nEnter your choice:\n");
        scanf("%d", &choice);
        

        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:\n");
            scanf("%d", &value);
            push(value);
            break;
        
        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
        default:
            printf("\n-----Wrong choice entered-----\n");
            exit(0);
            
        }
    }


}

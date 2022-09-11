#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 5

void insert();
void delete();
void display();

int queue[max], front = -1, rear = -1;

void main()
{
    int choice;

    printf("1\tInsert\n2\tDelete\n3\tDisplay\n\4\tExit\n\n");

    while(1)
    {
        printf("---Enter Choice---\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\n---Program has terminated---\n");
            exit(0);
        
        default:
            printf("\n---Invalid argument---\n");
        }
    }
}

void insert()
{
    int value;
    if(rear == max-1)
    {
        printf("\n---OVERFLOW---\n\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        printf("\nEnter the element:\n");
        scanf("%d", &value);
        printf("\n---Element is inserted---\n\n");
        rear++;
        queue[rear] = value;
    }
}

void delete()
{
    if(front == -1 || front > rear)
    {
        printf("\n---UNDERFLOW---\n\n");
    }
    else
    {
        printf("\n---%d is DELETED---\n\n", queue[front]);
        front++;
    }
}

void display()
{
    if(front == -1)
    {
        printf("\n---UNDERFLOW---\n\n");
    }
    else
    {
        printf("\n---ELEMENTS OF QUEUE---\n");
        for(int i=front; i<=rear; i++)
        {
            printf("%d\t", queue[i]);
        }printf("\n\n");
    }
}
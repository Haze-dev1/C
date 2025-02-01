#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int a[MAX];
int rear=-1;
int front=-1;

void insert()
{
    int x;
    if(rear==MAX-1)
    {
        printf("Overflow");
    }

    else
    {
        printf("Enter the element: ");
        scanf("%d",&x);
        rear=rear+1;
        a[rear]=x;
    }
}

void delete()
{
    if(front==-1)
    {
        printf("Underflow");
    }

    else
    {
        printf("The deleted element is %d",a[front]);
        front=front+1;
    }
}

void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
    }

    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d",a[i]);
        }
    }
}

int main()
{
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    int ch;

    while (1)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice");
        }

    }
    return 0;
}
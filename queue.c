#include<stdio.h>
#include<stdlib.h>
#define size 4
int rear=-1,front=0, array[size];
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    printf("\n OPTION 1:ENQUEUE \n OPTION 2:DEQUEUE \n OPTION 3:DISPLAY \n");
    printf("CHOOSE YOUR OPTION");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: enqueue();;
    break;
    case 2: dequeue();
    break;
    case 3: display();
    break;
    default: printf("invalid input");
    break;
    }
}
void enqueue()
{
    int x;
    if(rear>=size-1)
    {
        printf("queue overflow");
    }
    else{
        printf("enter the element to be inserted");
        scanf("%d",&x);
        rear=rear+1;
        array[rear]=x;
    }
    display();
}
void dequeue()
{
    int x;
    if(front<rear)
    {
        printf("queue underflow");
    }
    else{
        printf("element that poped:%d",array[front]);
        front=front-1;
    }
    display();
}
void display()
{
    int x;
    if(front<rear)
    {
        printf("queue is empty");
    }
    else{
        printf("element of the array");
        for (int i = front; i <= rear; ++i)
        {
            printf("%d\n",array[i]);
        }
        
    }
}
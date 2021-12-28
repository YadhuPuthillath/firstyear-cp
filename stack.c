#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1, array[size];
void push();
void pop();
void display();

int main()
{
    int choice;
    printf("\n OPTION 1:PUSH \n OPTION 2:POP \n OPTION 3:DISPLAY \n");
    printf("CHOOSE YOUR OPTION");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: display();
    break;
    default: printf("invalid input");
    break;
    }
}
void push()
{
    int x;
    if(top==size-1)
    {
        printf("stack overflow");
    }
    else{
        printf("enter the element to be inserted");
        scanf("%d",&x);
        top=top+1;
        array[top]=x;
    }
    display();
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("stack underflow");
    }
    else{
        printf("element that poped:%d",array[top]);
        top=top-1;
    }
    display();
}
void display()
{
    int x;
    if(top==-1)
    {
        printf("stack underflow");
    }
    else{
        printf("element of the array:%d",array[top]);
        for (int i = top; i >= 0; --i)
        {
            printf("%d\n",array[i]);
        }
        
    }
}
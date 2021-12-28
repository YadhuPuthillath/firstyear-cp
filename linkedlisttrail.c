#include<stdio.h>
#include<stdlib.h>
struct node *front=NULL,*rear=NULL,*p;
struct node{
    int data;
    struct node *link;
};

void display()
{
    printf("linked list is \n");
    for(p=front;p!=NULL)
    {
        printf("%d \n",p->data);
        p=p->link;
    }
}
void entry(int val)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=val;
    newnode->link=NULL;
    if(front=NULL)
    {
        front=rear=newnode;
        return;
    }
    rear->link=newnode;
    rear=newnode;
}
void insert(int ins,int pos)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=ins;
    for (int i = 1; p=front;j; i++)
    {
        /* code */
    }
    
}

}
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
void dequeue()
{
    struct node* temp=front;
    if(front==NULL){
        return;
    }
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(temp);
}
int main()
{
    struct Queue* x;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue(x);
    printf("Queue Front : %d \n",front->data);
    printf("Queue Rear : %d",rear->data);
    return 0;
}
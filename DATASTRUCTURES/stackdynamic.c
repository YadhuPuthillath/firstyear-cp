#include<stdio.h>
#include<stdlib.h>
struct qnode{
    int key;
    struct qnode *next;
    };
struct queue{
    struct qnode *front,*rear;
};
struct qnode* newnode(int k)
{
    struct qnode* temp=(struct qnode*)malloc(sizeof(struct qnode));
    temp->key=k;
    temp->next=NULL;
    return temp;
}

struct queue* creatqueue()
{
    struct qnode* q=(struct qnode*)malloc(sizeof(struct qnode));
    q->front=q->rear;
    return q;
}

void enqueue(struct queue* q,int k)
{
    struct qnode* temp=newnode(k);
    if(q->rear==NULL){
        q->front=q->rear=temp;
        return;
    }
    
}

    

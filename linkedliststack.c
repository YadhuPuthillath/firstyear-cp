#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* top=NULL;
void pust(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=x;
    temp->link=top;
    top = temp;
}
void pop(){
    struct node* temp;
    if(top==NULL) return;
    temp=top;
    top=top->link;
    free(temp);
}

int main()
{
    struct Queue* x;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop(x);
    printf("Queue Front : %d \n",top->data);
    printf("Queue Rear : %d",r->data);
    return 0;
}

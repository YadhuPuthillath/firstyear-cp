#include<stdio.h>
void swap(int*,int*);
int main()
{
    int x=5,y=10;
    int *px,*py;
    px=&x;
    py=&y;
    printf("your numbers are :%d %d \n",x,y);
    swap(&x,&y);
    printf("swaped numbers :%d %d \n",x,y);
    int sum;
    sum=* px+* py;
    printf("sum of the numbers :%d",sum);
    return 0;
}

void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


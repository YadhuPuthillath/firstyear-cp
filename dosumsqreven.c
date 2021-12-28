#include<stdio.h>
int main()
{
    int n,sum=0,count=0,sqr;
    printf("enter your number:");
    scanf("%d",&n);
    do
    {
        sqr=count*count;
        sum+=sqr;
        count+=2;

    } 
    while (count<=n);
    {
        printf("sum of squares:%d",sum);
    }
    return 0;
    
}
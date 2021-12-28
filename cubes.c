#include<stdio.h>
int main()
{
    int n,sum=0,count=1,cube;
    printf("enter your number:");
    scanf("%d",&n);
    while (count<=n)
    {
        cube=count*count*count;
        sum += cube;
        count++;
    }
    printf("sum=%d",sum);
    return 0;
    
}
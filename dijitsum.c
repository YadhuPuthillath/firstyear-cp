#include<stdio.h>
int main()
{
    int n,sum=0,rem=0,num;
    printf("enter your number:");
    scanf("%d",&n);
    num=n;
    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("sum of the dijits of %d=%d",num,sum);
    return 0;
}
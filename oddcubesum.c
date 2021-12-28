#include<stdio.h>
int main()
{
    int n,sum=0,count=1,sqr;
    printf("enter your number upto which square of odd number is calculated:");
    scanf("%d",&n);
    while (count<=n)
    {
        sqr=count*count;
        sum += sqr;
        count+=2;
    }
    printf("sum of squares of odd numbers is=%d",sum);
    return 0;
    
}
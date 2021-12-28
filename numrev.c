#include<stdio.h>
int main()
{
    int n,rev=0,rem=0,num;
    printf("enter your number:");
    scanf("%d",&n);
    num=n;
    while (n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("reverse of the number %dis:%d",num,rev);
    return 0;
}
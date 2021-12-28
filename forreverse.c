#include<stdio.h>
int main()
{
    int n,rev=0,rem=0,num;
    printf("enter your number:");
    scanf("%d",&n);
    num=n;
    for ( ; n > 0 ; n=n/10 )
    {
        rem=n%10;
        rev=(rev*10)+rem;
    }
    printf("reverse of the number %dis:%d",num,rev);
    return 0;
}
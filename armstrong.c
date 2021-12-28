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
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if (num=sum)
    {
        printf("number %d is armstrong",num,sum);
    }
    else
    {
        printf("your numberis not armstrong");
    }
    return 0;
    
    
}
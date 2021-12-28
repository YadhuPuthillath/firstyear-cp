#include<stdio.h>
void isamst(int num)
{
    int num1,rem=0,sum=0;
    num1=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(num1==sum)
    {
        printf("YOUR NUMBER IS AMSTRONG");
    }
    else
    {
        printf("YOUR NUMBER NOT IS AMSTRONG");
    }
}

int main()
{
    int num;
    printf("ENTER YOUR NUMBER :");
    scanf("%d",&num);
    isamst(num);
    return 0;
}
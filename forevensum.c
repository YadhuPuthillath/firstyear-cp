#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&num);
    for ( i = 0; i <= num; i+=2)
    {
        sum=sum+i;
    }
    printf("THE SUM OF EVEN NUMBERS UPTO %d IS:%d",num,sum);
    return 0;
    
}
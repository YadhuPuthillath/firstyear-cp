#include<stdio.h>
int main()
{
    int n,count=1,sum=0;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&n);
    do
    {
        sum+=count;
        count+=1;

    } while (count<=n);
    {
        printf("SUM OF NATURAL NUMBERS UPTO %d IS:%d",n,sum);
    }
    return 0;
    
}
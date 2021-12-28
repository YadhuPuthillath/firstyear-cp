#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    printf("Enter your number:");
    scanf("%d",&n);
    while (count<=n)
    {
        sum += count;
        count += 2;
    }
    printf("your sum is=%d",sum);
    return 0;
}
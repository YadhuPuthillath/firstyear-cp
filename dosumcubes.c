#include<stdio.h>
int main()
{
    int n,sum=0,count=1,cube;
    printf("enter your number:");
    scanf("%d",&n);
    do
    {
        cube=count*count*count;
        sum+=cube;
        count+=1;

    } 
    while (count<=n);
    {
        printf("sum of cubes:%d",sum);
    }
    return 0;
    
}
#include<stdio.h>
int main()
{
    int num,i,sum=0,cube;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&num);
    for ( i = 1; i <= num; i+=2)
    {
        cube=i*i*i;
        sum=sum+cube;
    }
    printf("THE SUM OF CUBES ODD NUMBERS UPTO %d IS:%d",num,sum);
    return 0;
    
}
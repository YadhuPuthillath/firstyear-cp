#include<stdio.h>
int main()
{
    int n,i,sum=0,avg;
    printf("ENTER NUMBER OF INTEGERS TO BE ADDED:");
    scanf("%d",&n);
    int num[n];
    for ( i = 0; i<n; ++i)
    {
        printf("\n ENTER THE MARKS %d:",i+1);
        scanf("%d",&num[i]);
        sum=sum+num[i];

    }
    avg=sum/n;
    printf("\nSUM :%d",sum);
    printf("\nAVERAGE:%d",avg);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,key,fount=0;
    printf("ENTER NUMBER OF INTEGERS TO BE ADDED:");
    scanf("%d",&n);
    int num[n];
    printf("\n ENTER THE ELEMENTS:\n");
    for ( i = 0; i<n; ++i)
    {
        scanf("%d",&num[i]);
    }
    printf("ENTER NUMBER OF NUMBER TO BE SCEARCHED:");
    scanf("%d",&key);
    for ( i = 0; i<n; ++i)
        if(num[i]==key)
        printf("\n found at %d,",i);
        fount=1;    
    if(fount==0)
        printf("not found");
    return 0;
}
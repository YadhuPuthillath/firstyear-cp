#include<stdio.h>
int main()
{
    int n;
    printf("print the number of elements of your array :\n");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; ++i)
    {
        printf("enter %dth element :\n",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",*(array+i));
    }
    return 0;
    
}
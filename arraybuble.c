#include<stdio.h>  
void main ()  
{  
    int n,i, j,temp;   
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int a[10];
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
       scanf("%d", &a[i]);
    for(i = 0; i<n; i++)  
    {  
        for(j = i+1; j<n; j++)  
        {  
            if(a[j] < a[i])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;   
            }   }   }   
    printf("Printing Sorted Element List ...\n");  
    for(i = 0; i<n; i++)  
    {  
        printf("%d\n",a[i]);  
    }  
}  
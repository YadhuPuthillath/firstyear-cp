#include<stdio.h>
#include<stdlib.h>
int fib(int);
int main()
{
    int n,i;
    printf("\n ENTER YOUR NUMBER OF TERMS : ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("\n ERROR - NUMBER OF TERMS CANNOT BE NEGATIVE \n");
        
    }
    printf("\n FIBNOCCI SEQUENCE FOR %d TERMS IS :",n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d\t",fib(i));
    }
    return 0;
}

int fib(int val)
{
    if(val==1||val==2)
    {
        return 1;
    }
    else{
        return(fib(val-1)+fib(val-2));
    }
}
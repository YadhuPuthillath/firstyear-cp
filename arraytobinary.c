#include<stdio.h>
int main()
{
    int decimal,binary[10],n,r,i;
    printf("\n ENTER THE DECIMAL INTEGER ");
    scanf("%d",&decimal);
    n=decimal;
    for ( i = 0; n > 0; i++)
    {
        r=n%2;
        binary[i]=r;
        n=n/2;
    }
    printf("\n BINARY EQUIVALENT OF %d is \t",decimal);
    for ( i--; i >= 0; i--)
    {
        printf("%d",binary[i]);
    }
    return 0;
}
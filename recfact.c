#include<stdio.h>
int fact(int n);
int simpfact(int n);
int main()
{
    int n;
    printf("ENTER YOUR NUMBER :");
    scanf("%d",&n);
    printf("FACTORIAL OF NUMBER %d USING RECRUSION : %d\n",n,fact(n));
    printf("FACTORIAL OF NUMBER %d USING NONRECRUSION : %d",n,simpfact(n));
    return 0;
}
int fact(int n)
{
    if (n>=1){
        return n*fact(n-1); }
    else {
        return 1;}
}
int simpfact(int n)
{
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact; 
}

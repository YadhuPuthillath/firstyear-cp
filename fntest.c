#include<stdio.h>
int main()
{
    int n;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&n);
    printf("PRIME NUMBERS UPTO %d IS: \n",n);
    primenumbers(n);
    return 0;
}
int isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void primenumbers(int n)
{
    if(n<2)
    {
        printf("NO PRIME NUMBRES\n");
    }
    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            printf("%d\t",i);
        }    
    }

}

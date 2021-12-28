#include<stdio.h>
int gcd(int, int);
int main()
{
    int i,j;
    printf("\n ENTER THE NUMBER :");
    scanf("%d %d",&i,&j);
    printf("\n THE GCD OF %d AND %d IS %d",i,j,gcd(i,j));
    return 0;
}

int gcd(int a, int b)
{
    int rem;
    rem = a%b;
    if(rem==0){
        return b;
    }
    else{
        return gcd(b,rem);
    }
}
#include<stdio.h>
int main()
{
    char str[]="hello, world";

    printf("enter a string in upper case: ");
    scanf("%s[A-Z]",str);

    printf("your string was  :%s\n",str);
    return 0;
}

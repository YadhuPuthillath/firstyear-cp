#include<stdio.h>
void reverse(char *str)
{
    int len=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        len++;
    }
    for (int i = 0; i < len/2; i++)
    {
        char ch=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=ch;
    }
    printf("THE REVERSE OF THE SRRING IS :\n%s",str);
}
int main()
{
    char str[100];
    printf("ENTER YOUR STRING : \n");
    gets(str);
    reverse(str);
}

#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int i,len,count=0;
    printf("ENTER YOUR WORD :");
    scanf("%s",word);
    len=strlen(word);

    for ( i = 0; i < len/2; ++i)
    {
        if(word[i]==word[len-i-1])
             count++;
    }
    if(count==i)
    {
        printf("\nYOUR WORD IS PALINDROME");
    }
    else
    {
        printf("\nYOUR WORD IS NOT A PALINDROME");
    }
    return 0;
}
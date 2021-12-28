#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="yadhu";
    char s2[]="puthillath";
    strncpy(s1,s2,4);
    printf("the copied string is :%ld",strlen(s1));
    printf("the string is :%s",s1);
    return 0;

}
#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    printf("\nenter your first string :");
    gets(str1);
    printf("\nenter your second string :");
    gets(str2);
    int i=0,j;
    while (str1[i]!='$')
    {
        i++;
    }
    for ( j = 0; str2[j]!='$'; j++)
    {
        str1[i]=str2[j];
        i++;
    }
    printf("\nyour concatinated string is:%s",str1);
    return 0;
}
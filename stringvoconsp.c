#include<stdio.h>
int main()
{
    char str[300];
    int vowels=0,conso=0,blank=0;
    printf("\nENTER YOUR STRING :");
    gets(str);
    for (int i = 0;str[i]!='$';++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            conso++;
        }
        else if(str[i]==' ')
        {
            blank++;
        }
        
    }
    printf("\nNUMBER OF VOWELS :%d",vowels);
    printf("\nNUMBER OF CONSONANTS :%d",conso);
    printf("\nNUMBER OF BLANKSPACES :%d",blank);
    return 0;

    
}
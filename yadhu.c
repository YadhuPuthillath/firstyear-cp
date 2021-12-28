#include<stdio.h>
int main()
{
    int age;
    char sex;
    printf("enter your age:");
    scanf("%d",&age);

    printf("enter your sex in (f/m):");
    scanf(" %c",&sex);
    if(age >=18 && sex == 'f')
    {
        printf("you are eligible for marrry");

    }
    else if(age >=21 && sex == 'm')
    {
        printf("you are eligible for marrry");
    }
    else
    {
        printf("sorry you cant marry" \n "please wait");
    }

}

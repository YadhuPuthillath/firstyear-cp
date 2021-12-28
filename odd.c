#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter your 1st number");
    scanf("%d",&num1);
    printf("enter your 2nd number");
    scanf("%d",&num2);
    printf("enter your 3rd number");
    scanf("%d",&num3);
     if(num1>num2)
     {
         if(num1>num3)
         {
             printf("1st number is largest amoung three number");
         }
         else
         {
             printf("2nd number is largest amoung three number");
         }
     }
     else if(num2>num3)
     {
         printf("2nd number is largest amoung three number");
     }
     else
     {
         printf("3rd number is largest amoung three number");
     }
     return 0;
}

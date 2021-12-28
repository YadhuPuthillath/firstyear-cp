#include<stdio.h>
int main(){
    double num1,num2,ans;
    char operator;
    printf("\n select your operator from(+,-,*,/):" );
    scanf("%c",&operator);
    printf("\n enter your first number:" );
    scanf("%lf",&num1);
    printf("\n enter your second number" );
    scanf("%lf",&num2);
    switch(operator){
        case '+':
        ans=num1+num2;
        printf("the sum of numbers are : %f\n",ans);
        break;
        case '-':
        ans=num1-num2;
        printf("the difference of numbers are : %f\n",ans);
        break;
        case '*':
        ans=num1*num2;
        printf("the product of numbers are : %f\n",ans);
        break;
        case '/':
        ans=num1/num2;
        printf("the quotient of numbers are : %f\n",ans);
        break;
        default:
        printf("enter a valid operator");
        break;}
    return 0;}
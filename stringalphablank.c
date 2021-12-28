#include<stdio.h>
#include<ctype.h>
int main()
{
    char phrase[] = "Sir Alexander Chapman Ferguson CBE is a Scottish former football manager and player, widely known for managing Manchester United from to . He is widely regarded as the greatest manager of all time and has won more trophies than any other manager in the history of football. As a player, he is best known for his stint with Rangers.";
    int alpha,blank,intex,punct;
    alpha=blank=punct=0;
    intex=0;
    while(phrase[intex])
    {
        if(isalpha(phrase[intex]))
        alpha++;
        if(isblank(phrase[intex]))
        blank++;
        if(ispunct(phrase[intex]))
        punct++;

        intex++;
    }

    printf("THE TOTAL NUMBER OF CHARACTER IS :%d \n",intex);
    printf("THE TOTAL NUMBER OF ALPHABETS IS :%d \n",alpha);
    printf("THE TOTAL NUMBER OF PUNTUATION IS :%d \n",punct);
    printf("THE TOTAL NUMBER OF BLANK SPACES IS :%d \n",blank);
    return 0;

}
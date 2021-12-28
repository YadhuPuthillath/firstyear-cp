#include<stdio.h>
int main()
{
    char test[2][3][4]={{{2,3,4,5},{4,5,7,9},{3,5,6,6}},
                        {{4,6,7,8},{4,6,7,5},{7,8,3,8}}};

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 4; k++)
            {
                printf("elements [%d][%d][%d] =%d \n",i,j,k,test[i][j][k]);
            }
    return 0;        
        
}    
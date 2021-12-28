#include<stdio.h>
int main()
{
    int ARR[10][10], m, n, ARR2[10][10],i2=0, m2;
    printf("\nEnter number of rows and columns : ");
    scanf("%d%d",&m, &n);
    printf("\nEnter the elements : ");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &ARR[i][j]);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ARR[i][j]!=0)
            {
                ARR2[i2][0]=i;
                ARR2[i2][1]=j;
                ARR2[i2][2]=ARR[i][j];
                i2++;
                }
        }
    }
    m2= i2;
    printf("\nSparse matrix \n");
    for(i2=0;i2<m2;i2++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d ", ARR2[i2][j])  ;
        }
        printf("\n");
    }
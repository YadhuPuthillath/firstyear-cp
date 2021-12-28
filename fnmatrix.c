#include<stdio.h>
#include<string.h>

void read_matrix(int row, int col)
{
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS :",i+1,j+1);
            scanf("%d",&matrix[row][col]);
        }
    }
    
}

void display_matrix(int row, int col)
{
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }
}

void sumof_matrix(int row, int col)
{
    int matrixa[row][col];
    int matrixb[row][col];
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS OF FIRST MATRIX :",i+1,j+1);
            scanf("%d",&matrixa[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS OF SECOND MATRIX :",i+1,j+1);
            scanf("%d",&matrixb[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j]=matrixa[i][j]+matrixb[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d",sum[i][j]);
        }
        printf("\n");
    }
}

void productof_matrix(int row, int col)
{
    int matrix1[row][col];
    int matrix2[row][col];
    int column;
    int product[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS OF FIRST MATRIX :",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    
    printf("COLUMN OF SECOND MATRIX");
    scanf("%d",&column);
    int matrixb[row][column];
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS OF SECOND MATRIX :",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int sum;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < col; k++)
            {
                sum=sum+matrix1[i][k]*matrix2[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d",product[i][j]);
        }
        printf("\n");
    }
}

void transof_matrix(int row, int col)
{
    int matrixa[row][col];
    int matrixb[row][col];
    int transpose[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ENTER %dTH ROW AND %d COLOUMN ELEMENTS OF FIRST MATRIX :",i+1,j+1);
            scanf("%d",&matrixa[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[i][j]=matrixb[j][i];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d",transpose[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("\tCHOOSE YOUR OPERATION\n");
    printf("1 : READ MATRIX\n");
    printf("2 : ADD TWO MATRIX\n");
    printf("3 : PRODUCT OFMATRIX\n");
    printf("4 : TRANSPOSE MATRIX\n");
    printf("5 : DISPLAY MATRIX\n");

    int n;
    printf("ENTER YOUR NUMBER :");
    scanf("%d",&n);
    
    int row,col;
    printf("ENTER NUMBER OF ROWS :");
    scanf("%d",&row);
    printf("ENTER NUMBER OF COLUMNS :");
    scanf("%d",&col);
    if(n==1)
    {
        read_matrix(row,col);
    }
    else if(n==2)
    {
        sumof_matrix(row,col);
    }
    else if(n==3)
    {
        productof_matrix(row,col);
    }
    else if(n==4)
    {
        transof_matrix(row,col);
    }
    else if(n==5)
    {
        display_matrix(row,col);
    }
    return 0;
}
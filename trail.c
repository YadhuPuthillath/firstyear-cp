#include <stdio.h>
void swap(int*,int*);
void main()
{
   int x, y, *a, *b, temp;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
swap(&x,&y);
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
}

void swap(int *a,int *b)
{
    int temp;
   temp = *b;
   *b = *a;
   *a = temp;
}
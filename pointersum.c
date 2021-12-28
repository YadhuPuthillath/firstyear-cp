#include<stdio.h>
int sum(int *p,int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s=s+i[p];
    }
    return s;
}
int main()
{
    int array[]={3,5,3,2};
    int s=sum(array,4);
    printf("sum of array is : %d \n",s);
    return 0;

}
#include<stdio.h>
struct euclidean
{
    int dist;
}d1,d2;

int main()
{
    int sum=0;
    printf("\nENTER THE DISTANCE BETWEEN THE POINTS :");
    scanf("%d",&d1.dist);
    printf("\nENTER THE DISTANCE BETWEEN THE ANOTHER POINTS :");
    scanf("%d",&d2.dist);
    sum=d1.dist+d2.dist;
    printf("\nTHE SUM OF THE DISTANCES IS : %d",sum);
    return 0;

}
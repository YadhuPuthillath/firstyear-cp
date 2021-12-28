#include<stdio.h>
struct student {
    int roll_number;
    char name[20];
    float mark_for_c;
};
int main()
{
    float sum=0,avg;
    struct student details[4]={{1,"abhishek",34},{2,"basith",67},{3,"catherine",89},{4,"david james",90}};
    for (int i = 0; i < 4; i++){
        printf("%d \n %s \n %f \n \n \n",details[i].roll_number,details[i].name,details[i].mark_for_c);
        sum=sum+details[i].mark_for_c;}
    avg=sum/4;
    printf("AVERAGE =%f",avg);
    return 0;
}
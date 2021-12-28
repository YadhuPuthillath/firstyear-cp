#include<stdio.h>
struct empdata
{
    char name[20];
    int employee_id;
    int salary;
};
int main()
{
    struct empdata details[4]={{"visal",12,5000},{"naveen",23,34546},{"reghu",10,34567},{"ajith",56,45678}};
    for (int i = 0; i < 4; i++)
    {
        printf("%s \n %d \n %d \n \n \n",details[i].name,details[i].employee_id,details[i].salary);
    }
    return 0;
}
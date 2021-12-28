#include<stdio.h>
#define c_size 100
union student
{
    char name[c_size];
    char house_name[c_size];
    char city_name[c_size];
    char state[c_size];
    long int pincode[c_size];
}st;
int main()
{
    printf("\nNAME :");
    scanf("%s",&st.name);
    printf("\nHOUSE NAME :");
    scanf("%s",&st.house_name);
    printf("\nCITY NAME :");
    scanf("%s",&st.city_name);
    printf("\nSTATE :");
    scanf("%s",&st.state);
    printf("\nPINCODE :");
    scanf("%ld",&st.pincode);
    return 0;
}
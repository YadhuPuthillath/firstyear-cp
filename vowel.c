#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter your alphabet :");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is vowel",alphabet);
        break;

        default:
        printf("%c is not vowel",alphabet);
        break;
    }
    return 0;
}
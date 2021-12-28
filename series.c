#include <stdio.h>
void fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    if (n == 1)
    {
        printf("%d\n", a);
        return;
    }
    if (n == 2)
    {
        printf("%d\n", b);
        return;
    }
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d IS YOUR NTH TERM\n", c);
    return;
};
int main()
{
    int n;
    printf("ENTER NTH TERM: \n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}

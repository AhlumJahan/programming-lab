#include <stdio.h>
int main()
{
    int a, b, c, n, i;
    printf("enter the no. of fibbonaci series");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("%d %d", a, b);
    for (i = 1; i <= n - 2; i++)
    {
        c = a + b;
        printf("%d", i);
        a = b;
        b = c;
    }

    return 0;
}

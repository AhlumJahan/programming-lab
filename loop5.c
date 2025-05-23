#include <stdio.h>
int main()
{
    int i, n, prod = 1;
    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        prod *= i;
    }
    printf("product:%d", prod);

    return 0;
}

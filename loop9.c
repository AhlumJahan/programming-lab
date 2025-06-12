// 2 4 8 16 32
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int result = pow(2, i);
        printf("%d", result);
    }

    return 0;
}

// sum of series 1+1/2+1/3......n
#include <stdio.h>
int main()
{
    int n;
    float i, sum = 1;
    printf("enter n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        sum = sum + (1 / i);
    }
    printf("sum=%f", sum);

    return 0;
}

// 123451234512345.....n
#include <stdio.h>
int main()
{

    int i, j, n;
    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 5; j++)

        {
            printf("%d", j);
        }
    }

    return 0;
}

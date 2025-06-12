// 1223334444......nterms
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)

        {
            printf("%d", i);
        }
    }

    return 0;
}

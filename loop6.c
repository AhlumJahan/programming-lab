#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("enter n:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("factorial doesnt exist");
    }

    else
    {

        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("%d", fact);
    }
    return 0;
}

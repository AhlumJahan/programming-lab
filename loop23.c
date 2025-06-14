#include <stdio.h>
int main()
{

    int i, j, r;
    for (i = 1; i <= 4; i++)
    {
        for (r = i; r <= 4; r++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

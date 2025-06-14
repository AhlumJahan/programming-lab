// product of matrices
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], prod[10][10] = {0};
    int r1, r2, c1, c2;
    printf("enter rows and columns of first matrix");
    scanf("%d %d", &r1, &c1);
    printf("enter rows and columns of second matrix");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("matrix multiplication is not possible \n");
        return 0;
    }
    printf("enter first matrix");

    for (int i = 0; i < r1; i++)

        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("enter second matrix:");
    for (int i = 0; i < r2; i++)

        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                prod[i][j] += a[i][k] * b[k][j];
    printf("product matrix :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d", prod[i][j]);
        printf("\n");
    }

    return 0;
}

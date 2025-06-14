// find the sum of diagonal elements of matrix
#include <stdio.h>
int main()
{
    int mat[10][10], n, sum = 0;
    printf("enter size of asquare matrix:");
    scanf("%d", &n);
    printf("enter matrix elemnts:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for (int i = 0; i < n; i++)
        // {
        sum += mat[i][i];
    // if (i != n - 1 - i)
    //     sum += mat[i][n - 1 - i];
    // }

    printf("sum of diagonal elements=%d\n", sum);

    return 0;
}

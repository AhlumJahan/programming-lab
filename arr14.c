// transpose of matrix
#include <stdio.h>
int main()
{

    int mat[10][10], trans[10][10], r, c, i, j;
    printf("enter rows and columns:");
    scanf("%d %d", &r, &c);
    printf("enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[i][j] = mat[i][j];

    printf("transpose of matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d", trans[i][j]);
        printf("\n");
    }

    return 0;
}

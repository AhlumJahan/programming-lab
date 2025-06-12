// 2 4 16 256 65536
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    printf("enter n :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int value = (int)pow(2, i);
        printf("%d", (int)pow(2, value));
    }

    return 0;
}

#include <stdio.h>
int main()
{

    int a, b, c;
    printf("enter three numbers");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest num", a);
        }
        else
        {
            printf("%d is the largest num", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the largest num", b);
        }
        else
        {
            printf("%d is the largest num", c);
        }
    }

    return 0;
}

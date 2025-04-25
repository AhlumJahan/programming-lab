#include <stdio.h>
int main()
{
    int i = 8, j = 5;
    float y = 0.005, x = 0.01;
    char C = 'e', D = 'f';
    int ans = (3 * i - 2 * j) % (2 * D - C) - (i + j); // e=101,f=102
    printf("%d\n", ans);
    printf("%d\n", (5 * (x + y)) > C);
    printf("%d\n", 2 * x + y == 0);
    printf("%f\n", 2 * x + (y == 0));
    printf("%d\n", (2 * x + y) == 0);
    printf("%d\n", x > y && i > 0 || j < 0);
    printf("%d\n", x > y && i > 0 | j < 0);
    printf("%d\n", x > y && i > 0 || j < 5);

    return 0;
}

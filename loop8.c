#include <stdio.h>
int main()
{
    int n, i, prime = 1;
    printf("enter a num:");
    scanf("%d", &n);

    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {

            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
    {
        printf("%d is prime num", n);
    }
    else
    {
        printf("%d is not prime", n);
    }
    return 0;
}

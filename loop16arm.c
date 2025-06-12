#include <stdio.h>
int main()
{

    int num, originalNum, remainder, result = 0;

    printf("enter num :");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (result == originalNum)
    {
        printf("%d is an armstrong num", originalNum);
    }
    else
    {
        printf("%d is not armstrong num", originalNum);
    }

    return 0;
}

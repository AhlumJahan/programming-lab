// display arr integers in reverse order
#include <stdio.h>
int main()
{

    int arr[100], n;
    printf("enter the numbers");
    scanf("%d", &n);
    printf("the %d numbers are", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the elements of the array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

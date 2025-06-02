// input an integer array from the user and display the same
#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

// sort an integer array using bubble sort
#include <stdio.h>
int main()
{

    int arr[100], n, temp;
    printf("enter no. of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // bubble sort

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}

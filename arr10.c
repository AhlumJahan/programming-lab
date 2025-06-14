// sum of all elements in integer array
#include <stdio.h>
int main()
{

    int arr[100], n, sum = 0;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("sum of array elements=%d\n", sum);

    return 0;
}

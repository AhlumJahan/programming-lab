// search for an element in an integer array
#include <stdio.h>
int main()
{
    int arr[100], n, key, found = 0;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter %d elemnets:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter element to search:");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("element not found.\n");

    return 0;
}

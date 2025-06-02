// input a string from the user and find its length without using string library
#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;
    printf("enter a string");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            break;
        }

        length++;
    }

    printf("the length of the string is: %d ", length);

    return 0;
}

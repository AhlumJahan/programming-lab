// palindrome
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length, i;
    int isPalindrome = 1;
    printf("enter a string");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    length = 0;
    while (str[length] != '\0')
    {

        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("the string is palindrome.\n");
    }
    else
    {
        printf("the string is not palindrome");
    }

    return 0;
}

// arr5 but using fgets
#include <stdio.h>
int main()
{
    char str[100];
    printf("enter your string :");
    fgets(str, sizeof(str), stdin);
    printf("your string is %s", str);

    return 0;
}

// demonstrate the use of libarary functions
#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100] = "hello";
    char str2[100] = "world";
    char str3[100];

    // strlen():length of string
    printf("length of %s is %lu \n", str1, strlen(str1));
    // strcpy():copy of string
    strcpy(str3, str1);
    printf("after strcpy,str3=%s\n", str3);
    // strcat():concatenate strings
    strcat(str3, str2);
    printf("after strcat,str3=%s\n", str3);

    // strcmp():compare things
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
    {
        printf("%s and %s are equal.\n", str1, str2);
    }
    else if (cmp < 0)
    {
        printf("%s is less than %s .\n", str1, str2);
    }
    else
    {
        printf("%s is greater than %s .\n", str1, str2);
    }

    return 0;
}

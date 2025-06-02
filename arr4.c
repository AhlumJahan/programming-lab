// display contents of acharacter array
#include <stdio.h>
int main()
{

    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // character array in null terminator
                                                  // or
    // or we can write char arr[]="Hello";
    printf("characters array content:%s\n", arr);

    return 0;
}

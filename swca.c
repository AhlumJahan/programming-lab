#include <stdio.h>
int main()
{
    int choice;

    printf("enter 3 numbers (1,2,3):");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("salaam\n");
        break;
    case 2:
        printf("aadaab\n");
        break;
    case 3:
        printf("hello\n");
        break;
    default:
        printf("incorrect option\n");
    }

    return 0;
}

// store and display all students in tabular format
#include <stdio.h>
struct Student
{

    char name[50];
    int rollNo;
    float marks;
};
int main()
{

    int n;
    printf("enter number of students:");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter detail of students %d:\n", i + 1);
        printf("roll No:");
        scanf("%d", &s[i].rollNo);
        printf("Name:");
        scanf(" %[^\n]", s[i].name);
        printf("marks:");
        scanf("%f", &s[i].marks);
    }

    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    for (int i = 0; i < n; i++)
    {
        printf("%-10d %-20s %-10.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}

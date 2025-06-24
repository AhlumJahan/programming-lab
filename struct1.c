// store and display details of a student
#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main()
{
    struct Student s;
    printf("enter student roll number:");
    scanf("%d", &s.rollNo);
    printf("enter student name :");
    scanf(" %[^\n]", s.name);
    printf("enter student marks:");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll No.:%d\n", s.rollNo);
    printf("Name:%s\n", s.name);
    printf("Name:%.2f/n", s.marks);
    return 0;
}

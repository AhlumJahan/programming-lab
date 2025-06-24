// store and display employee details
#include <stdio.h>
struct Employee
{
    int empId;
    char name[50];
    char department[30];
    float salary;
};
int main()
{
    struct Employee e;
    printf("enter employee ID:");
    scanf("%d", &e.empId);
    printf("enter employee name:");
    scanf(" %[^\n]", e.name);
    printf("enter department:");
    scanf(" %[^\n]", e.department);
    printf("enter salary:");
    scanf("%f", &e.salary);
    printf("\nEmployee Details:\n");
    printf("ID:%d\n", e.empId);
    printf("Name:%s\n", e.name);
    printf("Department:%s\n", e.department);
    printf("salary:%2.f\n", e.salary);
    return 0;
}

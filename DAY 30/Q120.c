#include <stdio.h>
struct Employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct Employee e[50];
    int n, i, search, found = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &e[i].id);
        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);
        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Details ---\n");
    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nSalary: %.2f\n", e[i].salary);
    }

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(e[i].id == search)
        {
            printf("\nEmployee Found");
            printf("\nName: %s", e[i].name);
            printf("\nSalary: %.2f", e[i].salary);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nEmployee not found");
    }
    return 0;
}

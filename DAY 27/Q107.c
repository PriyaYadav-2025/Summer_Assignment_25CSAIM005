#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, hra, da, total;
};
int main() 
{
    struct Employee e;
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct Employee emp[n];
    for(i=0;i<n;i++) 
    {
        printf("\nEnter Employee Details\n");
        printf("ID: ");
        scanf("%d",&emp[i].id);
        printf("Name: ");
        scanf("%s",emp[i].name);
        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;
        emp[i].total = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\n--- Salary Details ---\n");

    for(i=0;i<n;i++) 
    {
        printf("\nID: %d",emp[i].id);
        printf("\nName: %s",emp[i].name);
        printf("\nTotal Salary: %.2f\n",emp[i].total);
    }
    return 0;
}

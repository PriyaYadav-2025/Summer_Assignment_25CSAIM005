#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct Student s[50];
    int n, i, search, found = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++)
    {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(s[i].roll == search)
        {
            printf("\nStudent Found");
            printf("\nName: %s", s[i].name);
            printf("\nMarks: %.2f", s[i].marks);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nStudent not found");
    }
    return 0;
}


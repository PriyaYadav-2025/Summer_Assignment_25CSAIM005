#include <stdio.h>
#include <string.h>
struct Student 
{
    int roll;
    char name[50];
    float marks;
};
int main() 
{
    struct Student s[100];
    int n, i, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);
    while(getchar() != '\n');
    for(i = 0; i < n; i++) 
    {
        printf("\nEnter details of student %d\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Student Records ---\n");

    for(i = 0; i < n; i++) 
    {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
    return 0;
}

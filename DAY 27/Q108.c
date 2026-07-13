#include <stdio.h>
int main() 
{
    char name[50];
    int roll, m1, m2, m3, total;
    float percentage;
    printf("Enter Student Name: ");
    scanf("%s",name);
    printf("Enter Roll Number: ");
    scanf("%d",&roll);
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total = m1+m2+m3;
    percentage = total/3.0;
    printf("\n----- MARKSHEET -----\n");
    printf("Name: %s\n",name);
    printf("Roll No: %d\n",roll);
    printf("Total Marks: %d\n",total);
    printf("Percentage: %.2f%%\n",percentage);

    if(percentage>=90)
        printf("Grade: A");
    else if(percentage>=75)
        printf("Grade: B");
    else if(percentage>=50)
        printf("Grade: C");
    else
        printf("Grade: Fail");

    return 0;
}

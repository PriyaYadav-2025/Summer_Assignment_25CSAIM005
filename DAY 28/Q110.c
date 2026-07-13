#include <stdio.h>
struct Account {
    int accno;
    char name[50];
    float balance;
};
int main() 
{
    struct Account a;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d",&a.accno);
    printf("Enter Name: ");
    scanf("%s",a.name);
    printf("Enter Initial Balance: ");
    scanf("%f",&a.balance);
    do {
        printf("\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice) {

        case 1:
            printf("Enter amount: ");
            scanf("%f",&amount);
            a.balance += amount;
            break;
        case 2:
            printf("Enter amount: ");
            scanf("%f",&amount);

            if(amount <= a.balance)
                a.balance -= amount;
            else
                printf("Insufficient Balance");
            break;
        case 3:
            printf("\nAccount No: %d",a.accno);
            printf("\nName: %s",a.name);
            printf("\nBalance: %.2f",a.balance);
            break;
        }
    } while(choice!=4);
    return 0;
}

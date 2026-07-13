#include <stdio.h>
struct Bank
{
    int acc_no;
    char name[30];
    float balance;
};
int main()
{
    struct Bank b;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &b.acc_no);
    printf("Enter Account Holder Name: ");
    scanf("%s", b.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);
    while(1)
    {
        printf("\n\n--- Bank Menu ---");
        printf("\n1. Display Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nAccount Number: %d", b.acc_no);
                printf("\nName: %s", b.name);
                printf("\nBalance: %.2f", b.balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                b.balance = b.balance + amount;
                printf("Money deposited successfully");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if(amount <= b.balance)
                {
                    b.balance = b.balance - amount;
                    printf("Money withdrawn successfully");
                }
                else
                {
                    printf("Insufficient balance");
                }
                break;

            case 4:
                printf("Exit");
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}

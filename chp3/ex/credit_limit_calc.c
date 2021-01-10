/**
 * A program that will determine whether a department
 * store customer has exceeded the credit limit on a charge account
 */
#include <stdio.h>
int main(void)
{
    unsigned int account_no = 0;
    double begining_bal;  //credit balance you owe
    double total_charges; // total cash you will pay
    double total_credits; //amount of credit to be used
    double credit_limit;  //account_no credit limit

    while (account_no != -1)
    {
        printf("%s", "Enter account number (-1 to end): ");
        scanf("%u", &account_no);
        if (account_no == -1)
        {
            break;
        }
        printf("%s", "Enter beginning balance: ");
        scanf("%lf", &begining_bal);
        printf("%s", "Enter total charges: ");
        scanf("%lf", &total_charges);
        printf("%s", "Enter total credits: ");
        scanf("%lf", &total_credits);
        printf("%s", "Enter credit limit: ");
        scanf("%lf", &credit_limit);

        double balance = begining_bal + total_credits;
        if (balance > credit_limit)
        {
            printf("Account:\t%u\n", account_no);
            printf("Credit limit:\t%lf\n", credit_limit);
            printf("Balance:\t%lf\n", balance);
            puts("Credit limit Exceeded.\n");
        }
    }
}
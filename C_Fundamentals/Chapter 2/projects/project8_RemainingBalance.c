#include <stdio.h>

int main(void)
{
    float loan;
    float interest_rate;
    float monthly_payment;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_rate = (interest_rate / 100 )  / 12.00;
    float remaining_balance = (loan *(1 + monthly_rate) - monthly_payment);
    printf("Balance remaining after first payment: %.2f\n", remaining_balance);
    loan = remaining_balance;
    remaining_balance = (loan *(1 + monthly_rate) - monthly_payment);
    printf("Balance remaining after second payment %.2f\n", remaining_balance);
    loan = remaining_balance;
    remaining_balance = (loan *(1 + monthly_rate) - monthly_payment);
    printf("Balance remaining after third payment %.2f", remaining_balance);


    return 0; 
}
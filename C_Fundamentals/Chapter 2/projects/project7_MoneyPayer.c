#include <stdio.h>

int main(void)
{
    printf("Enter a dollar amount: ");
    
    int dollar_amount;
    scanf("%d", &dollar_amount );
    
    int twenty_dollars = 20, 
        ten_dollars = 10,
        five_dollars =5,
        one_dollar =1;
    int twenties = dollar_amount / twenty_dollars;
    dollar_amount = dollar_amount - (twenties * twenty_dollars);
    int tens = dollar_amount / ten_dollars;
    dollar_amount = dollar_amount - (tens * ten_dollars);
    int fives = dollar_amount / five_dollars;
    dollar_amount = dollar_amount - (fives * five_dollars);
    int ones = dollar_amount / one_dollar;
    
    printf("\n");
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d", ones);

    return 0;

    
}
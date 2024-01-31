#include <stdio.h>

int main(void)
{
    float money;
    float taxrate = 1.05f;
    
    
    printf("Enter an amount: ");
    scanf("%f", &money);

    float total = money * taxrate;
    printf("With tax added: %.2f", total);

    return 0;
}
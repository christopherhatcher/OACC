#include <stdio.h>

int main(void)
{
    int area,threedigit,fourdigit;
    
    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &area,&threedigit,&fourdigit);
    printf("You entered %d.%d.%d", area,threedigit,fourdigit);

    return 0;
}
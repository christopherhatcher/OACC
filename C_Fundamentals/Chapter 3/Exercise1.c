#include <stdio.h>
int main(void)
{
    printf("%6d,%4d\n", 86, 1040);
    // 86**** , 1040
    printf("%12.5e\n", 30.253);
    // exponential form 5 decimals and right justification of 3
    printf("%.4f\n", 83.162);
    // 83.1620
    printf("%-6.2g|\n", .0000009979);
    // left justification of 6, only two 00 after decimal point so 00
    float x;
    x = 8.124f;
    printf("|%-8.1f|\n", x);





    return 0;
}
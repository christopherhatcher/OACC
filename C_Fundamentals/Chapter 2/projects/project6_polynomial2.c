#include <stdio.h>

int main(void)
{
    printf("What is the value of x?: ");
    int x;
    scanf("%d", &x);
    int x5 = 3 * (x * x * x * x * x);
    int x4 = 2 * (x * x * x * x);
    int x3 = 5 * (x * x * x);
    int x2 = x * x;
    int x1 = 7*x;
    
    printf("%d",((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x -6);

    return 0;

}
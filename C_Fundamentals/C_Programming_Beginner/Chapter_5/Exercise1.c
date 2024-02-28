#include <stdio.h>

int main(void) {
    int i = 3; 
    int j = 4;
    int k = 5;

    printf("%d", i % j + i < k);

    return 0;
}
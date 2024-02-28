#include <stdio.h>

int main(void) {
    int i = 1;
    int j = 1;
    int k = 1;
    printf("%d", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
    return 0;
}

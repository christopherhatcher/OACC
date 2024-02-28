/* Write a single expression whose value is either -1, 0, or +1 
depending on whether i is less than, equal to, or greater than j
respectively. */


#include <stdio.h>

int main(void) {
    
    int i;
    int j;

    printf("Give me a two value!: ");
    scanf("%d %d", &i, &j);
    printf("Your value is : %d ", (i > j) - (i < j));
    return 0;
}
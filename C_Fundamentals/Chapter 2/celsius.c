// Constants can be defined by using the #define directive.
// #define INCHES_PER_POUND 166 - will replace every instant of the macro with 166.
// The value of a a macro can be an expression : #define RECIPROCAL_OF_PI (1.0f / 3.14159f)
// Usually the best pratice is to use UPPER-CASE letters for macro names. 
/* Converts a Fahrenheit temperature to Celsius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}
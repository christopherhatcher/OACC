// preprocessor directive like #include <stdio.h> the # defines it as a preprocessor director, and the angle brackets includes that file.
// the .h are called header files, define information about some of the  functions that are provided by that file.
// stdio.h is the standard C library header and provides functionality for displaying output, among other things.
// This is short for standard input/out.
/* stdio.h contains the information that the compiler needs to understand what printf means, as well as other functions that deal
with input and output. You can also create your own header files. They are case sensitive, and you should use lower case
User defined is double qoutes (#include "Jason") it will look in the directory to include the header file. */

#include <stdio.h>

int main(void)

{
   char str[100];
   int i;
    double x;
   printf("Enter a value: ");
   scanf("%d %s %lf", &i, str, &x);

   printf("\nYou entered: %d:::::%s::::::%lf\n", i, str, x);

   return 0; 
}
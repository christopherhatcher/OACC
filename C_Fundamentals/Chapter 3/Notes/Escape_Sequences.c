#include <stdio.h>

int main(void)
{
    printf("Item\tUnit\tPurchase\n\tPrice\tData\n");
    printf("\"Hello!\"\n"); // \" escapes the quotation marks and allows printf to print "
    printf("\\");
    /* 
       Alert(bell) \a
       Backspace \b
       New Line  \n
       Horizontal tab \t
    */
    return 0;
}
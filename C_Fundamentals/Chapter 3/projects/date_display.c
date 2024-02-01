#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("You entered the date %d%.2d%d",year,month,day); // the %.2d tells the program we need two digits and adds the 0 .

    return 0;

    

}

#include <stdio.h>

int main(void)
{
// To declare a variable you must first choose the type, and then its name
// int height;
// float profit;
// If several variables have same type, declaraction can be combined
int height, length, width, volume;
float profit, loss;
// Variables can be given a value by means of an Assignment
height = 8;
length = 12;
width = 10;
profit = 2150.48f;
// Once a variable has been assigned a value, it can be used to compute the value of another variable
volume = height * length * width; /* volume is now 960 */
//We can use printf to display the current value of a variable
printf("Height: %d\n", height); // %d is a placeholder indicating where the value of height is to be filled in.
                                // $d works only for int variables; to print float we'd use %f instead.
printf("Profit: $%.1f\n",profit); // the .1 in between the %f tells it to print only 1 decimal after decimal point
printf("Height: %d Length: %d\n", height, length);
return 0;


}
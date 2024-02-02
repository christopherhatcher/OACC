#include <stdio.h>

int main(void)
{
    int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifthteen,sixteen;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one,&two,&three,&four,&five,&six,&seven,&eight,&nine,&ten,&eleven,&twelve,&thirteen,&fourteen,&fifthteen,&sixteen);
    int row1 = one + two + three + four, 
        row2 = five + six + seven + eight, 
        row3 = nine + ten + eleven + twelve, 
        row4 = thirteen + fourteen + fifthteen + sixteen;
    int col1 = one + five + nine + thirteen, 
        col2 = two + six + ten + fourteen, 
        col3 = three + seven + eleven + fifthteen,
        col4 = four + eight + twelve + sixteen;
    int diagonal1 = thirteen + ten + seven + four,
        diagonal2 = sixteen + eleven + six + one;



    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifthteen,sixteen);
    printf("\nRow sums: %d %d %d %d\n", row1, row2,row3,row4);
    printf("Column sums: %d %d %d %d\n", col1,col2,col3,col4);
    printf("Diagonal sums: %d %d", diagonal1, diagonal2);

    return 0;


}
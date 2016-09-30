#include <stdio.h>
#include <stdlib.h>

#define LINE1 "Edet taksa na taksi,"
#define LINE2 "Vse! Priehali! Mersi!"
#define LINE3 " "
int main()

{
    int number_of_line=1;
    while (number_of_line<5)
    {
        printf("%-25s\n", LINE1);
        number_of_line=number_of_line+1;
    }
    printf("%-25s\n", LINE3 );
    while (number_of_line<8)
    {
        printf("%25s\n", LINE1);
        number_of_line=number_of_line+1;
    }
        printf("%25s\n", LINE2);
    return 0;
}

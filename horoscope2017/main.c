//This horoscope for 2017.

#include <stdio.h>
#include <stdlib.h>

#define LINE0 " "
#define LINE1 "   X   "
#define LINE3 "  XXX  "
#define LINE5 " XXXXX "
#define LINE7 "XXXXXXX"
#define NY " *** Happy New Year ! ***"

int main()
{
    int YearOfBurth;

    printf("Enter the year of your birth:  \n");
    printf("\n", LINE0);
    scanf( "%d", &YearOfBurth);

    printf("\n", LINE0);
    printf("*********************************\n");
    printf("\n", LINE0);

    if(YearOfBurth%12==0)
    printf("%7s000  \n");

    if(YearOfBurth%12==1)
    printf("%7s111  \n");

    if(YearOfBurth%12==2)
    printf("%7s222  \n");

    if(YearOfBurth%12==3)
    printf("%7s333  \n");

    if(YearOfBurth%12==4)
    printf("%7s444  \n");

    if(YearOfBurth%12==5)
    printf("%7s555  \n");

    if(YearOfBurth%12==6)
    printf("%7s666  \n");

    if(YearOfBurth%12==7)
    printf("%7s777  \n");

    if(YearOfBurth%12==8)
    printf("%7s888  \n");

    if(YearOfBurth%12==9)
    printf("%7s999  \n");

    if(YearOfBurth%12==10)
    printf("%7s101010  \n");

    if(YearOfBurth%12==11)
    printf("%7s111111  \n");

    printf("%20s\n", LINE0);
    printf("%20s\n", LINE1);
    printf("%20s\n", LINE3);
    printf("%20s\n", LINE1);
    printf("%20s\n", LINE5);
    printf("%20s\n", LINE3);
    printf("%20s\n", LINE7);
    printf("%20s\n", LINE1);

    printf("\n", LINE0);
    printf("%28s\n", NY);
    printf("\n", LINE0);
    printf("*********************************\n");
    printf("\n", LINE0);

    return 0;
}

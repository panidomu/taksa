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
    printf("****************************************\n");
    printf("\n", LINE0);

    if(YearOfBurth%12==0)
    printf("You were born in the Year of the Monkey!  \n"
    "%4sIt will be just a good year !  \n");

    if(YearOfBurth%12==1)
    printf("You were born in the Year of the Rooster!  \n"
    "Fate will tell you the right way at the next year!  \n");

    if(YearOfBurth%12==2)
    printf("You were born in the Year of the Dog!  \n"
    "Money waiting for you at the next year! \n");

    if(YearOfBurth%12==3)
    printf("You were born in the Year of the Pig!  \n"
    "You will not be bored at the next year!  \n");

    if(YearOfBurth%12==4)
    printf("You were born in the Year of the Rat!  \n"
    "It is planned, then do at the next year!  \n");

    if(YearOfBurth%12==5)
    printf("You were born in the Year of the Bull!  \n"
    "Exercise, eat right, be patient at the next year !  \n");

    if(YearOfBurth%12==6)
    printf("You were born in the Year of the Tiger!  \n"
    "You get a great experience at the next year! \n");

    if(YearOfBurth%12==7)
    printf("You were born in the Year of the Rabbit!  \n"
    "Not only work in life at the next year! \n");

    if(YearOfBurth%12==8)
    printf("You were born in the Year of the Dragon!  \n"
    "It will be a pleasant surprise at the next year!  \n");

    if(YearOfBurth%12==9)
    printf("You were born in the Year of the Snake!  \n"
    "You will get new skills at the next year !  \n");

    if(YearOfBurth%12==10)
    printf("You were born in the Year of the Horse!  \n"
    "Your dreams  will come true at the next year! \n");

    if(YearOfBurth%12==11)
    printf("You were born in the Year of the Goat!  \n"
    "You will have a romantic relationship at the next year! \n");

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
    printf("****************************************\n");
    printf("\n", LINE0);

    getch();
    return 0;
}

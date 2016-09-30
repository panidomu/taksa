#include <stdio.h>
#include <stdlib.h>

#define LINE1 "Edet taksa na taksi,"
#define LINE2 "Vse! Priehali! Mersi!"
#define LINE3 " "
int main()

{
    int number_of_repetition;
    int repetition = 1;

    printf("Set the number of repetitions of the song: ");
    scanf("%d",&number_of_repetition);

    while (repetition<number_of_repetition + 1)
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
    repetition=repetition + 1;

    }
    printf("%s\n", LINE3 );
    printf("The end of the song!\n");
           return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Let `s play!  \n");
    do
        {printf( "Input any number from 1 to 10: \n");
        scanf( "%d", &number);
    }
    while(number !=7);
    printf("Congratulations! It's this number!\n");
    return 0;
}

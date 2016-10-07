//It is example from book by Stephen Prata
//List 6.18 page 240_matrioshka

#include <stdio.h>
#include <stdlib.h>
#define ROWS 10
#define CHARS 10
int main()
{
    int row;
    char ch;
    for (row=0; row<ROWS; row++)
    {for (ch='A'+row; ch<('A'+CHARS); ch++)
        printf("%c", ch);
    printf("\n");
    }
    return 0;
}

//It is example from book by Stephen Prata
//List 6.17 page 239_matrioshka

#include <stdio.h>
#include <stdlib.h>
#define ROWS 6
#define CHARS 10
int main()
{
    int row;
    char ch;
    for (row=0; row<ROWS; row++)
    {for (ch='A'; ch<('A'+CHARS); ch++)
        printf("%c", ch);
    printf("\n");
    }
    return 0;
}

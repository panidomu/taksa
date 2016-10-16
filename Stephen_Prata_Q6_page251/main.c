//print 8 columns and 4 rows "$".

#include <stdio.h>
#include <stdlib.h>

    int main()
{
    int i, j;
    for (i=1; i<=4; i++)
{
        for (j=1; j<=8; j++)
            printf("$");
        printf("\n");
    }
    return 0;
}


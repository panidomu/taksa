#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,list[10];
    for (i=1; i<=9; i++)
{
        list[i]=i*2;
        for(j=1; j<=i;j++)
            printf("%4d", list[j]);
        printf("\n");
    }
    return 0;
}

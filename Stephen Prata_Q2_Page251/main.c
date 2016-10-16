#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    for(value=36; value > 0 ; value /= 21 )

        printf( "%3d"  , value ) ;
    return 0;
}

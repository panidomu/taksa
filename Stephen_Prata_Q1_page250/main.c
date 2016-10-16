#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quack = 2 ;
quack += 5 ;
printf("quack + = 5      %d\n",quack);
quack *= 10 ;
printf("quack *= 10      %d\n",quack);
quack -=6;
printf("quack -=6      %d\n",quack);
quack /= 8 ;
printf("quack /= 8      %d\n",quack);
quack %= 3 ;
printf("quack %= 3      %d\n",quack);

    return 0;
}

//Станок 1 делает 3 детали в час, станок 2 - 5, станок 3 - 7.
//За сколько (целых) часов будет сделано 100 ( или сколько указано) деталей?

#include <stdio.h>
#include <stdlib.h>

#define SPEED_1 3
#define SPEED_2 5
#define SPEED_3 7

int main()
{
    int Sum;
    int SumTotal;
    int Time = 0;

    printf("Specify the total number of products: ");
    scanf("%d",&SumTotal);

    do
    {
       Time = Time + 1;
       Sum = Time * (SPEED_1 + SPEED_2 + SPEED_3);
    }
    while (Sum < SumTotal);

    printf("Needed %d hours for the manufacture of %d products\n", Time, SumTotal);

    return 0;
}

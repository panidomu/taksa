#include <stdio.h>

int multiplication( int num1, int num2 ); //прототип функции

int main()
{
  int num1;
  int num2;

  printf( "Введите два  числа для умножения: " );
  scanf( "%d", &num1 );
  scanf( "%d", &num2 );
  printf( "Результат умножения %d\n", multiplication( num1, num2 ) ); // вызов функции
  getchar();

  return 0;
}

int multiplication(int num1, int num2) // определение функции
{
  return num1 * num2;
}

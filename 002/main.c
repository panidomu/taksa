// Пример про определение функции вот отсюда: http://cppstudio.com/post/6471/

#include <stdio.h>

int multiplication( int num1, int num2 ); //прототип функции. Объявляется выше main
//Если  функцию определить до главной функции, то прототип не нужен.
//Проверим это в   примере 003.c

int main()
{
  int num1;
  int num2;

  printf( "Input two numbers: " ); //вводим два числа для умножения
  scanf( "%d", &num1 );
  scanf( "%d", &num2 );
  printf( "Take it!   %d\n", multiplication( num1, num2 ) ); // вызов функции
  //getchar(); //работает и без этого

  return 0;
}

int multiplication(int num1, int num2) // определение функции, точку с запятой НЕ ставим!
{
  return num1 * num2;
}

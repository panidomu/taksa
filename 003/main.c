// Пример про определение функции вот отсюда: http://cppstudio.com/post/6471/
//Проверяем: если перенесем определение функции выше main,
//действительно ли не надо будет  объявлять ее прототип?


#include <stdio.h>

//int multiplication( int num1, int num2 ); //прототип функции. Объявляется выше main
//Пробуем обойтись без объявления прототипа ф-и.

int multiplication(int num1, int num2) // определение функции. Cтавим ДО main, точку с запятой НЕ ставим!
{
  return num1 * num2;
}

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

//Ура!!! Работает!!!




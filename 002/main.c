// ������ ��� ����������� ������� ��� ������: http://cppstudio.com/post/6471/

#include <stdio.h>

int multiplication( int num1, int num2 ); //�������� �������. ����������� ���� main
//����  ������� ���������� �� ������� �������, �� �������� �� �����.
//�������� ��� �   ������� 003.c

int main()
{
  int num1;
  int num2;

  printf( "Input two numbers: " ); //������ ��� ����� ��� ���������
  scanf( "%d", &num1 );
  scanf( "%d", &num2 );
  printf( "Take it!   %d\n", multiplication( num1, num2 ) ); // ����� �������
  //getchar(); //�������� � ��� �����

  return 0;
}

int multiplication(int num1, int num2) // ����������� �������, ����� � ������� �� ������!
{
  return num1 * num2;
}

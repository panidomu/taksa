// ������ ��� ����������� ������� ��� ������: http://cppstudio.com/post/6471/
//���������: ���� ��������� ����������� ������� ���� main,
//������������� �� �� ���� �����  ��������� �� ��������?


#include <stdio.h>

//int multiplication( int num1, int num2 ); //�������� �������. ����������� ���� main
//������� �������� ��� ���������� ��������� �-�.

int multiplication(int num1, int num2) // ����������� �������. C����� �� main, ����� � ������� �� ������!
{
  return num1 * num2;
}

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

//���!!! ��������!!!




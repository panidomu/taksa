#include <stdio.h>

int multiplication( int num1, int num2 ); //�������� �������

int main()
{
  int num1;
  int num2;

  printf( "������� ���  ����� ��� ���������: " );
  scanf( "%d", &num1 );
  scanf( "%d", &num2 );
  printf( "��������� ��������� %d\n", multiplication( num1, num2 ) ); // ����� �������
  getchar();

  return 0;
}

int multiplication(int num1, int num2) // ����������� �������
{
  return num1 * num2;
}

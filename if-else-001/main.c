//�� ������� ������� �� ����� ������ �. ������  � ������ �������
//"����� �������������� � �� 21 ����", ���.85

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf ("How much is the cake? \n");
    scanf("%d",&x);
    printf ("And how much money I have? \n");
    scanf("%d",&y);

    //������� � if ����� � �������,  ����� � ������� � ���� ������� �� ������!

    if (x==y)
        printf("One cake, please!\n");

    if (x<y)
        printf("It's my day!where is my cake?\n");

    if (x>y)
        printf("Sorry, I forgot that I am on a diet...\n");

    return 0;
}

//�� ������� ������� �� ����� ������ �. ������  � ������ �������
//"����� �������������� � �� 21 ����", ���.85

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cost, mymoney;
    printf ("How much is the cake? \n");
    scanf("%d",&cost);
    printf ("And how much money I have? \n");
    scanf("%d",&mymoney);

    //������� � if ����� � �������,  ����� � ������� � ���� ������� �� ������!

    if (cost==mymoney)
        printf("One cake, please!\n");

    if (cost<mymoney)
        printf("It's my day!where is my cake?\n");

    if (cost>mymoney)
        printf("Sorry, I forgot that I am on a diet...\n");

    return 0;
}

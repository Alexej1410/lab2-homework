#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int TIME = 10;
	int LENGHT = 30;
	printf("����� ��������� ������ - %d ��\n����� ���� �������� - %d ��\n�������� ��� �������� ��� �� ���� ����� %d ��/��", TIME, LENGHT, LENGHT / TIME);
}
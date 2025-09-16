#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int TIME = 10;
	int LENGHT = 30;
	printf("Время натяжения пленки - %d мс\nДлина шага человека - %d см\nСкорость его движения как на суше равна %d см/мс", TIME, LENGHT, LENGHT / TIME);
}
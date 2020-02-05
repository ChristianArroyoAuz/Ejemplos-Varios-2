#include <stdio.h>
#include <conio.h>


void main()
{
	float metros, resul, pulg;
	int resul2, pulg2;
	printf_s("\nValor en metros: ");
	scanf_s("%f", &metros);
	resul = metros * (1 / .3048);
	resul2 = resul;
	pulg = resul - resul2;
	pulg = pulg * 12;
	pulg2 = pulg;
	printf_s("El resultado es: %d pies %d pulgadas \n", resul2, pulg2);
	_getch();
}
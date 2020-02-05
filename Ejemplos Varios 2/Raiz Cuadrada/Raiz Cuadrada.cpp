#include <stdio.h>
#include <conio.h>
#include <math.h>


void main()
{
	float a, b;
	printf_s("\nIngrese numero: ");
	scanf_s("%f", &a);
	b = sqrt(a);
	printf_s("\nLa raiz del numero ingresado es: %0.3f\n\n", b);
	_getch();
}
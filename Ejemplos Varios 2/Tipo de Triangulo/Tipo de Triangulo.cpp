#include <stdio.h>
#include <conio.h>


void main()
{
	float uno, dos, tres;
	printf_s("\nValor del primer lado: ");
	scanf_s("%f", &uno);
	printf_s("\nValor del segundo lado: ");
	scanf_s("%f", &dos);
	printf_s("\nValor del tercer lado: ");
	scanf_s("%f", &tres);
	if ((uno == dos) && (dos == tres) && (uno == tres))
	{
		printf_s("\nEl triangulo es equilatero\n");
	}
	else
	{
		if ((uno != dos) && (dos != tres) && (uno != tres))
		{
			printf_s("\nEl triangulo es escaleno\n");
		}
		else
		{
			printf_s("\nEl triangulo es isoceles\n");
		}
	}
	_getche();
}
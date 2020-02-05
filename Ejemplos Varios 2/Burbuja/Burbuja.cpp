#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#define TAM 10


void main()
{
	int  temp, i, j;
	float a[TAM];
	system("pause");
	printf("Llenando arreglo con numeros aleatorios\n");
	srand(time(NULL));
	for (i = 0; i < TAM; i++)
	{
		a[i] = rand() % 100;
	}
	printf("Arreglo ingresado\n");
	for (i = 0; i < TAM; i++)
	{
		printf("a[%d] = %f\n", i, a[i]);
	}
	for (j = 1; j <= TAM; j++)
	{
		for (i = 0; i < TAM - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	printf("\nArreglo ordenado\n");
	for (i = 0; i < TAM; i++)
	{
		printf("a[%d] = %f\n", i, a[i]);
	}
}
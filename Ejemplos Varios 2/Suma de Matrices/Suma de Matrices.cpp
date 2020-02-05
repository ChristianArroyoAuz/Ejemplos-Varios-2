#include <stdio.h>


void main()
{
	int matrix1[4][4];
	int matrix2[4][4];
	int matrixres[4][4];
	int i, j, p, q;
	printf("ingrese el numero de filas m = ");
	scanf_s("%i", &p);
	printf("ingrese el numero de columnas n = ");
	scanf_s("%i", &q);
	if ((p >= 1 && p <= 100) || (q >= 1 && q <= 100))
	{
		printf("\n\n Ingrese la matriz A\n");
		for (i = 0;i < p;i++)
		{
			for (j = 0;j < q;j++)
			{
				printf("\n Ingrese el elemento A[%i][%i]\t", i + 1, j + 1);
				scanf_s("%i", &matrix1[i][j]);
			}
		}
		printf("\nLa matriz A es\n");
		for (i = 0;i < p;i++)
		{
			for (j = 0;j < q;j++)
			{
				printf("\t");
				printf("%i", matrix1[i][j]);
			}
			printf("\n");
		}
		printf("\n\n Ingrese la matriz B\n");
		for (i = 0;i < p;i++)
		{
			for (j = 0;j < q;j++)
			{
				printf("\n Ingrese el elemento B[%i][%i]\t", i + 1, j + 1);
				scanf_s("%i", &matrix2[i][j]);
			}

		}
		printf("\nLa matriz B es\n");
		for (i = 0;i < p;i++)
		{
			for (j = 0;j < q;j++)
			{
				printf("\t");
				printf("%i", matrix2[i][j]);
			}
			printf("\n");
		}
		for (i = 0;i < p;i++)
		{
			for (j = 0;j < q;j++)
			{
				matrixres[i][j] = matrix1[i][j] + matrix2[i][j];

			}
		}
		printf("\nLa matriz A + B es\n");
		for (i = 0;i < p;i++)
		{
			for (j = 0;j < q;j++)
			{
				printf("\t");
				printf("%i", matrixres[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Fuer de Rango Gracias por usar el programa\n");
	}
}
#include<stdio.h>
#include<conio.h>


void main()
{
	int a, b, c, d, j, x, y, z, k, g = 2;
	printf_s("Ingrese su propia clave.\n");
	printf_s("Ingrese 1er digito: ");
	scanf_s("%d", &a);
	printf_s("Ingrese 2do digito: ");
	scanf_s("%d", &b);
	printf_s("Ingrese 3er digito: ");
	scanf_s("%d", &c);
	printf_s("Ingrese 4to digito: ");
	scanf_s("%d", &d);
	printf_s("\nPara abrir la puerta ingrese la clave, ud tiene 3 intentos.");
	for (j = 1; j <= 3; j++)
	{
		printf_s("\nIngrese 1 digito: ");
		scanf_s("%d", &x);
		if (x == a)
		{
			printf_s("Ingrese 2 digito: ");
			scanf_s("%d", &y);
			if (y == b)
			{
				printf_s("Ingrese 3 digito: ");
				scanf_s("%d", &z);
				if (z == c)
				{
					printf_s("Ingrese 4 digito: ");
					scanf_s("%d", &k);
					if (k == d)
					{
						printf_s("BIENVENIDO.\n");
						j = 3;
						g = 3;
					}
					else
					{
						printf_s("\nCLAVE ERRONEA");
					}
				}
				else
				{
					printf_s("Ingrese 4 digito: ");
					scanf_s("%d", &k);
					printf_s("\nCLAVE ERRONEA");
				}
			}
			else
			{
				printf_s("Ingrese 3 digito: ");
				scanf_s("%d", &z);
				printf_s("Ingrese 4 digito: ");
				scanf_s("%d", &k);
				printf_s("\nCLAVE ERRONEA.");
			}
		}
		else
		{
			printf_s("Ingrese 2 digito: ");
			scanf_s("%d", &y);
			printf_s("Ingrese 3 digito: ");
			scanf_s("%d", &z);
			printf_s("Ingrese 4 digito: ");
			scanf_s("%d", &k);
			printf_s("\nCLAVE ERRONEA");
		}
	}
	if (g == 2)
	{
		printf_s("\nBLOQUEADO.\n");
	}
	_getch();
}
#include<windows.h>
#include<stdio.h>
#include<conio.h>


int main()
{
	int Opcion;
	do {
		printf_s("\n|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                    ESCUELA POLITECNICA NACIONAL.                      |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                           PROGRAMACION.                               |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                               GR-5.                                   |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|      AUTOR: Arroyo Auz Chrstian Xavier.                               |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                    ELECCION NUMERO INTERMEDIO.                        |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|   INSTRUCCIONES: 1.-Presione 1 para ingresar al menu de opciones.     |*|");
		printf_s("\n|*|                  2.-Presione 2 para salir.                            |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|   RESTRICCIONES: 1.- No ingresar caracteres alfabeticos.              |*|");
		printf_s("\n|*|                  2.- No ingresar numeros igual o el mismo valor.      |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                _                                      |*|");
		printf_s("\n|*|                               ANO                                     |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                            2010-2011.                                 |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|");
		scanf_s("%d", &Opcion);
		system("cls");
		switch (Opcion)
		{
		case 1:
		{
			int iOpcion;
			do {
				printf_s("Programa de seleccion de un numero inetrmedio.\n\n\n");
				printf_s("Escoja una opcion:\n\n\n");
				printf_s("1.- Numero intermedio.\n\n\n");
				printf_s("2.- Salir.\n\n\n");
				printf_s("Ingrese el numero de la opcion: ");
				scanf_s("%d", &iOpcion);
				system("cls");
				switch (iOpcion)
				{
				case 1:
				{
					int a, b, c;
					printf_s("\n\nIngrese el primer numero: ");
					scanf_s("%d", &a);
					printf_s("\n\nIngrese el segundo numero: ");
					scanf_s("%d", &b);
					printf_s("\n\nIngrese el tercer numero: ");
					scanf_s("%d", &c);
					if ((a > b & b > c) || (a < b & b < c))
					{
						printf_s("\n\nEl numero intermedio es:  ""%d\n\n\n", b);
					}
					if ((b > a & a > c) || (b < a & a < c))
					{
						printf_s("\n\nEl numero intermedio es:  ""%d\n\n\n", a);
					}
					if ((a > c & c > b) || (a < c & c < b))
					{
						printf_s("\n\nEl numero intermedio es:  ""%d\n\n\n", c);
					}
					printf_s("Presione una tecla para continuar...");
					_getch();
					system("cls");
					break;
				}
				case 2:
				{
					printf_s("\n\nGracias...\n\n\n");
					break;
				}
				default:
				{
					printf_s("\n\nIngreso una opcion incorrecta.");
					printf_s("\n\n\n\nIntente otra vez, Por favor.");
					printf_s("\n\n\n\nPresione una tecla para continuar.");
					_getch();
					system("cls");
				}
				}
			}
			while (iOpcion != 2);
			printf_s("Por usar este programa!!!\n\n\n");
			return 0;
		}
		case 2:
		{
			printf_s("\n\nGracias...\n\n\n");
			break;
		}
		default:
		{
			printf_s("\n\nIngreso una opcion incorrecta.");
			printf_s("\n\n\n\nIntente otra vez, Por favor.");
			printf_s("\n\n\n\nPresione una tecla para continuar.");
			_getch();
			system("cls");
		}
	}
}
	while (Opcion != 2);
	printf_s("Por usar este programa!!!\n\n\n");
	return 0;
}
#include<iostream>
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
		printf_s("\n|*|                AUTOR: Arroyo Auz Chrstian Xavier.                     |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                        _                                              |*|");
		printf_s("\n|*|                    DISENO DE CALCULADORA BASICA.                      |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|   INSTRUCCIONES: 1.-Presione 1 para ingresar al menu de opciones.     |*|");
		printf_s("\n|*|                  2.-Presione 2 para salir.                            |*|");
		printf_s("\n|*|                  -Dentro de los subsiguientes menus presionar         |*|");
		printf_s("\n|*|                   la tecla de la opcion deseada y los valores         |*|");
		printf_s("\n|*|                   para dichas operaciones.-                           |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|   RESTRICCIONES: 1.- No ingresar caracteres alfabeticos.              |*|");
		printf_s("\n|*|                  2.- Ingresar numeros mayores a 0                     |*|");
		printf_s("\n|*|                      para la division.                                |*|");
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
				printf_s("Programa de una Calculadora Basica.\n\n\n");
				printf_s("Escoja una opcion:\n\n\n");
				printf_s("1.- Sumar dos numeros.\n\n\n");
				printf_s("2.- Restar dos numero.\n\n\n");
				printf_s("3.- Multiplicar dos numeros.\n\n\n");
				printf_s("4.- Dividir dos numeros.\n\n\n");
				printf_s("5.- Salir.\n\n\n");
				printf_s("Ingrese el numero de la opcion: ");
				scanf_s("%d", &iOpcion);
				system("cls");
				switch (iOpcion)
				{
				case 1:
				{
					float x, y, a;
					printf_s("\n\nIngrese el primer numero: ");
					scanf_s("%f", &x);
					printf_s("\n\nIngrese el segundo numero: ");
					scanf_s("%f", &y);
					a = x + y;
					printf_s("\n\nLa suma de los dos numeros es:  ""%.2f\n\n\n", a);
					printf_s("Presione una tecla para continuar.");
					_getch();
					system("cls");
					break;
				}
				case 2:
				{
					float x, y, b;
					printf_s("\n\nIngrese el primer numero: ");
					scanf_s("%f", &x);
					printf_s("\n\nIngrese el segundo numero: ");
					scanf_s("%f", &y);
					b = x - y;
					printf_s("\n\nLa resta de los dos numeros es:  ""%.2f\n\n\n", b);
					printf_s("Presione una tecla para continuar.");
					_getch();
					system("cls");
					break;
				}
				case 3:
				{
					float x, y, c;
					printf_s("\n\nIngrese el primer numero: ");
					scanf_s("%f", &x);
					printf_s("\n\nIngrese el segundo numero: ");
					scanf_s("%f", &y);
					c = x * y;
					printf_s("\n\nLa multiplicacion de los dos numeros es:  ""%.2f\n\n\n", c);
					printf_s("Presione una tecla para continuar.");
					_getch();
					system("cls");
					break;
				}
				case 4:
				{
					float x, y, d;
					printf_s("\n\nIngrese el primer numero: ");
					scanf_s("%f", &x);
					printf_s("\n\nIngrese el segundo numero: ");
					scanf_s("%f", &y);
					d = x / y;
					printf_s("\n\nLa division del primer numero para el segundo numeros es:  ""%.2f\n\n\n", d);
					printf_s("Presione una tecla para continuar.");
					_getch();
					system("cls");
					break;
				}
				case 5:
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
			while (iOpcion != 5);
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
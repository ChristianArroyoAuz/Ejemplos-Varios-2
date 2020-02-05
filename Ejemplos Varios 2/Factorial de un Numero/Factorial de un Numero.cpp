#include<windows.h>
#include<stdio.h>
#include<conio.h>


int main()
{
	int Opcion;
	do {
		printf("\n|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                    ESCUELA POLITECNICA NACIONAL.                      |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                           PROGRAMACION.                               |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                               GR-5.                                   |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|      AUTOR: Arroyo Auz Chrstian Xavier.                               |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                    FACTORIAL DE UN NUMERO ENTERO                      |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|   INSTRUCCIONES: 1.-Presione 1 para ingresar al menu de opciones.     |*|");
		printf("\n|*|                  2.-Presione 2 para salir.                            |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|   RESTRICCIONES: 1.- No ingresar caracteres alfabeticos.              |*|");
		printf("\n|*|                  2.- No ingresar numeros menores a 0.                 |*|");
		printf("\n|*|                  3.- No ingresar numeros decimales.                   |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                _                                      |*|");
		printf("\n|*|                               ANO                                     |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                            2010-2011.                                 |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|*|                                                                       |*|");
		printf("\n|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|");
		scanf_s("%d", &Opcion);
		system("cls");
		switch (Opcion)
		{
		case 1:
		{
			int iOpcion;
			do {
				printf("Programa de Factorial de un numero.\n\n\n");
				printf("Escoja una opcion:\n\n\n");
				printf("1.- Factorial de un numero.\n\n\n");
				printf("2.- Salir.\n\n\n");
				printf("Ingrese el numero de la opcion: ");
				scanf_s("%d", &iOpcion);
				system("cls");
				switch (iOpcion)
				{
				case 1:
				{
					int factorial, a, numero;
					printf("\n\nIngrese el numero entero: ");
					scanf_s("%d", &numero);
					for (factorial = 1, a = 1;a <= numero;a++)
					{
						factorial = factorial * a;
					}
					printf("\n\nEl factorial de %d es : %d\n\n", numero, factorial);
					printf("\nPresione una tecla para continuar...");
					_getch();
					system("cls");
					break;
				}
				case 2:
				{
					printf("\n\nGracias...\n\n\n");
					break;
				}
				default:
				{
					printf("\n\nIngreso una opcion incorrecta.");
					printf("\n\n\n\nIntente otra vez, Por favor.");
					printf("\n\n\n\nPresione una tecla para continuar.");
					_getch();
					system("cls");
				}
				}
			} while (iOpcion != 2);

			printf("Por usar este programa!!!\n\n\n");
			return 0;
		}
		case 2:
		{
			printf("\n\nGracias...\n\n\n");
			break;
		}
		default:
		{
			printf("\n\nIngreso una opcion incorrecta.");
			printf("\n\n\n\nIntente otra vez, Por favor.");
			printf("\n\n\n\nPresione una tecla para continuar.");
			_getch();
			system("cls");
		}
	}
} 
	while (Opcion != 2);
	printf("Por usar este programa!!!\n\n\n");
	return 0;
}
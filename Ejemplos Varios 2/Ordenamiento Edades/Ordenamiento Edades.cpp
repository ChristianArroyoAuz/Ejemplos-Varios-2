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
		printf_s("\n|*|                    ELECCION NOMBRE Y EDAD.                            |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|   INSTRUCCIONES: 1.-Presione 1 para ingresar al menu de opciones.     |*|");
		printf_s("\n|*|                  2.-Presione 2 para salir.                            |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|                                                                       |*|");
		printf_s("\n|*|   RESTRICCIONES: 1.-No ingrese numeros en la opcion                   |*|");
		printf_s("\n|*|                     de nombres.                                       |*|");
		printf_s("\n|*|                  2.-No ingrese caracteres alfabeticos en la opcion    |*|");
		printf_s("\n|*|                     de edades.                                        |*|");
		printf_s("\n|*|                                                                       |*|");
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
				printf_s("Programa de seleccion de nombre y edad.\n\n\n");
				printf_s("Escoja una opcion:\n\n\n");
				printf_s("1.- Nombre y edad.\n\n\n");
				printf_s("2.- Salir.\n\n\n");
				printf_s("Ingrese el numero de la opcion: ");
				scanf_s("%d", &iOpcion);
				system("cls");
				switch (iOpcion)
				{
				case 1:
				{
					char nombre1[100], nombre2[100], nombre3[100];
					int edad1, edad2, edad3;
					printf_s("Ingrese el primer nombre: ");
					scanf_s("%s", &nombre1, 100);
					printf_s("\n\nIngrese la edad 1: ");
					scanf_s("%d", &edad1);
					system("cls");
					printf_s("Ingrese el segundo nombre: ");
					scanf_s("%s", &nombre2, 100);
					printf_s("\n\nIngrese la edad 2: ");
					scanf_s("%d", &edad2);
					system("cls");
					printf_s("Ingrese el tercer nombre: ");
					scanf_s("%s", &nombre3, 100);
					printf_s("\n\nIngrese la edad 3: ");
					scanf_s("%d", &edad3);
					system("cls");
					if ((edad1 > edad2 && edad2 > edad3) || (edad2 < edad3 && edad3 < edad1))
					{
						printf_s("El nombre de la persona de mayor edad es:  ""%s\n\n\n", nombre1);
						printf_s("Con: ""%d ", edad1);
						printf_s("aos de edad.\n\n\n");
					}
					if ((edad2 > edad1 && edad1 > edad3) || (edad1 < edad3 && edad3 < edad2))
					{
						printf_s("El nombre de la persona de mayor edad es:  ""%s\n\n\n", nombre2);
						printf_s("Con: ""%d ", edad2);
						printf_s("años de edad.\n\n\n");
					}
					if ((edad3 > edad2 && edad2 > edad1) || (edad2 < edad1 && edad1 < edad3))
					{
						printf_s("El nombre de la persona de mayor edad es:  ""%s\n\n\n", nombre3);
						printf_s("Con: ""%d ", edad3);
						printf_s("años de edad.\n\n\n");
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
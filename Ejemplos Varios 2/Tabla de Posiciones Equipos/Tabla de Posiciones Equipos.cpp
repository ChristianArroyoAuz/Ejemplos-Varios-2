#include<windows.h>
#include<stdio.h>
#include<conio.h>


int main(int argc, char* argv[])
{
	int Opcion;
	do {
		//La siguiente parte corresponde a la presentacion del programa
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\n|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("\t\t\tESCUELA POLITECNICA NACIONAL.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("\t\t\t\tPROGRAMACION.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("\t\t\t\t    GR-5.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("   AUTORES:");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("  Arroyo Auz Chrstian Xavier.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t                 ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("\t\t\t  EXAMEN SEGUNDO BIMETSRE.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("   INSTRUCCIONES:");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s(" 1.-Presione 1 para ingresar al menu de opciones.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t     2.-Presione 2 para salir.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t      -Dentro de los subsiguientes menus presionar");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t       la tecla de la opcion deseada y los valores");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t       para dichas operaciones.-");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("   RESTRICCIONES:");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s(" 1.-En los programas que corresponda introducir");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t\tpalabras, solo se permite el ingreso de una sola");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t\tpalabra.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t     2.-Los programas admiten numeros hasta con dos");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t\tdecimales.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t     3.-No se admiten numeros negativos.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t\t                                   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		printf_s("\t\t     4.-No se admiten caracteres ASCII.");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("\t\t\t\t     A%cO", 165);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		printf_s("\t\t\t\t  2010-2011");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		printf_s("\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|*|\t\t\t\t\t\t\t\t\t  |*|");
		printf_s("\n|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|@|");
		//Funcion que nos permite almacenar cierto dato ingresado
		scanf_s("%d", &Opcion);
		system("cls");
		//Funcion para poder elegir entre diferentes tipos de opciones
		switch (Opcion)
		{
			//Primeras de las opciones de las cuales se puede escoger
		case 1:
		{
			//Declaracion de una de la variabbles
			int iOpcion;
			//Funcion que nos permite realizar cierta operacion
			do {
				system("cls");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf_s("Examen del Segundo Bimestre de Programacion.\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf_s("Escoja una opcion:\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				printf_s("1.- Tabla de posiciones y punto de los Equipos.\n\n\n");
				printf_s("2.- Salir.\n\n\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				printf_s("Ingrese el numero de la opcion: ");
				scanf_s("%d", &iOpcion);
				system("cls");
				switch (iOpcion)
				{
				case 1:
				{
					//Funcion que nos permite crear una estructura de varios diferentes datos en uno solo
					struct puntos
					{
						//Declaracion de alguna variables a usar
						char nombre[60];
						char ciudad[60];
						int puntosac;
						float precio;
					};
					int i, m;
					struct  puntos x[50];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					printf_s("\nPROGRAMA DE TABLA DE POSICIONES DE LOS EQUIPOS DE FUTBOL.");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					printf_s("\n\n%cEl numero de equipos debe ser 3.%c", 34, 34);
					m = 3;
					//Funcion que nos permite hacerle repetitiva y creciente o decreciente a un valor ingresado
					for (i = 1;i <= m;i++)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
						printf_s("\n--------------------------------------------");
						printf_s("\n\nIngrese el Nombre del Equipo %d: ", i);
						scanf_s("%s", &x[i - 1].nombre, 60);
						printf_s("\n\nIngrese la Ciudad del Equipo %d: ", i);
						scanf_s("%s", &x[i - 1].ciudad, 60);
						printf_s("\n\nIngrese el Total de los Puntos Acumulasdos del Equipo %d: ", i);
						scanf_s("%d", &x[i - 1].puntosac);
						printf_s("\n--------------------------------------------");
					}
					system("cls");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
					printf_s("\t\tTABLA DE POSICIONES DE LOS EQUIPOS.", 165);
					printf_s("\n\nNOMBRE	        CIUDAD	     PUNTOS ACUMULADOS");
					printf_s("\n--------------------------------------------------");
					for (i = 0;i < m;i++)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
						printf_s("\n\n %s		%s		  %d			", x[i].nombre, x[i].ciudad, x[i].puntosac);
					}
					if (x[i - 1].puntosac != x[i - 2].puntosac && x[i - 2].puntosac != x[i - 3].puntosac)
					{
						if (x[i - 1].puntosac == x[i - 2].puntosac)
						{
							printf_s("\n--------------------------------------------------");
							printf_s("\n--------------------------------------------------");
							printf_s("\nLos Equipos %s y %s estan Empatados en Puntos.", x[i - 1].nombre, x[i - 2].nombre);
							printf_s("\nLos Equipos estan Empatados en la posicion %d.");
							printf_s("\n--------------------------------------------------");
							printf_s("\n--------------------------------------------------");
						}
						if (x[i - 1].puntosac == x[i - 3].puntosac)
						{
							printf_s("\n--------------------------------------------------");
							printf_s("\n--------------------------------------------------");
							printf_s("\nLos Equipos %s y %s estan Empatados en Puntos.", x[i - 1].nombre, x[i - 3].nombre);
							printf_s("\nLos Equipos estan Empatados en la posicion %d.");
							printf_s("\n--------------------------------------------------");
							printf_s("\n--------------------------------------------------");
						}
						if (x[i - 2].puntosac == x[i - 3].puntosac)
						{
							printf_s("\n--------------------------------------------------");
							printf_s("\n--------------------------------------------------");
							printf_s("\nLos Equipos %s y %s estan Empatados en Puntos.", x[i - 2].nombre, x[i - 3].nombre);
							printf_s("\nLos Equipos estan Empatados en la posicion %d.");
							printf_s("\n--------------------------------------------------");
							printf_s("\n--------------------------------------------------");
						}
					}
					if (x[i - 1].puntosac >= x[i - 2].puntosac)
					{
						printf_s("\n--------------------------------------------------");
						printf_s("\n--------------------------------------------------");
						printf_s("\nAl  Segundo Equipo le faltan %d para alcanzar al Primer Equipo.");
						printf_s("\nAl  Tercer Equipo le faltan %d para alcanzar al Primer Equipo.");
						printf_s("\n--------------------------------------------------");
						printf_s("\n--------------------------------------------------");
					}
					if (x[i - 1].puntosac == x[i - 2].puntosac && x[i - 2].puntosac == x[i - 3].puntosac)
					{
						printf_s("\n--------------------------------------------------");
						printf_s("\n--------------------------------------------------");
						printf_s("\nLos Tres Equipos estan Empatados en la posicion.");
						printf_s("\n--------------------------------------------------");
						printf_s("\n--------------------------------------------------");
					}
					printf_s("\n\nPresione una tecla para continuar...");
					//Funcion que permite salir del caso
					_getch();
					system("cls");
					//Funcio que permite hacer repetitivo
					break;
				}
				case 2:
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
					printf_s("\n\nGracias...\n\n\n");
					break;
				}
				//Funcion para el ingreso de datos incorrectos
				default:
				{
					//Parte en la cual se imprime cuando se ingresa un dato incorrecto
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
					printf_s("\n\nIngreso una opcion incorrecta.");
					printf_s("\n\n\n\nIntente otra vez, Por favor.");
					printf_s("\n\n\n\nPresione una tecla para continuar...");
					_getch();
					system("cls");
				}
				}
			}
			//Condicion para cerrar un programa
			while (iOpcion != 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
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
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf_s("\n\nIngreso una opcion incorrecta.");
			printf_s("\n\n\n\nIntente otra vez, Por favor.");
			printf_s("\n\n\n\nPresione una tecla para continuar...");
			_getch();
			system("cls");
		}
	}
} 
	while (Opcion != 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf_s("Por usar este programa!!!\n\n\n");
	//Funcion que nos devuelve un valor
	return 0;
}
#include <STdio.h>
#include <conio.h>


void main()
{
	int salir, saliryesno;
	int m, d;
	salir = 0;
	while (salir == 0)
	{
		printf_s("\n\t\t\tPROGRAMA 1. SIGNO ZODIACAL\n");
		printf_s("\t\t\t==========================\n\n");
		printf_s("Introduzca su mes de nacimiento: ");
		scanf_s("%d", &m, "\n");
		while ((m > 12) || (m < 1))
		{
			printf_s("Introduzca su mes de nacimiento(DE 1 A 12): ");
			scanf_s("%d", &m, "\n");
		}
		switch (m)
		{
			case 1:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))//!= esta sentencia es diferente de
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 20) ? printf_s("\nSu signo es CAPRICORNIO.\n\n") : printf_s("\nSu signo es ACUARIO.\n\n");
				break;
			}
			case 2:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 29) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 29): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 19) ? printf_s("\nSu signo es ACUARIO.\n\n") : printf_s("\nSu signo es PISCIS.\n\n");
				break;
			}
			case 3:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 20) ? printf_s("\nSu signo es PISCIS.\n\n") : printf_s("\nSu signo es ARIES.\n\n");
				break;
			}
			case 4:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 30) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 20) ? printf_s("\nSu signo es ARIES.\n\n") : printf_s("\nSu signo es TAURO.\n\n");
				break;
			}
			case 5:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 21) ? printf_s("\nSu signo es TAURO.\n\n") : printf_s("\nSu signo es GEMINIS.\n\n");
				break;
			}
			case 6:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 30) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 21) ? printf_s("\nSu signo es GEMINIS.\n\n") : printf_s("\nSu signo es CANCER.\n\n");
				break;
			}
			case 7:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 23) ? printf_s("\nSu signo es CANCER.\n\n") : printf_s("\nSu signo es LEO.\n\n");
				break;
			}
			case 8:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 23) ? printf_s("\nSu signo es LEO.\n\n") : printf_s("\nSu signo es VIRGO.\n\n");
				break;
			}
			case 9:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 30) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 23) ? printf_s("\nSu signo es LEO.\n\n") : printf_s("\nSu signo es LIBRA.\n\n");
				break;
			}
			case 10:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 23) ? printf_s("\nSu signo es LIBRA.\n\n") : printf_s("\nSu signo es ESCORPION.\n\n");
				break;
			}
			case 11:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 30) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 22) ? printf_s("\nSu signo es ESCORPION.\n\n") : printf_s("\nSu signo es SAGITARIO.\n\n");
				break;
			}
			case 12:
			{
				printf_s("Introduzca su dia de nacimiento: ");
				scanf_s("%d", &d, "\n");
				while ((d > 31) || (d != (d)))
				{
					printf_s("Introduzca dia(ENTRE 1 Y 31): ");
					scanf_s("%d", &d, "\n");
				}
				(d <= 21) ? printf_s("\nSu signo es SAGITARIO.\n\n") : printf_s("\nSu signo es CAPRICORNIO.\n\n");
				break;
			}
		}
		printf_s("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");
		scanf_s("%d", &saliryesno);
		switch (saliryesno) 
		{
			case 1:
			{
				salir = 1;
			}
		}
	}
	_getch();
}
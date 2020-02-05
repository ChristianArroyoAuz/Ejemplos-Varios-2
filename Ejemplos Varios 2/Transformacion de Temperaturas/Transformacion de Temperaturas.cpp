# include <stdio.h>
# include <conio.h>


void main()

{
	printf_s("         ESCUELA POLITECNICA NACIONAL\n");
	printf_s("                  PROGRAMACION\n");
	printf_s("                      GR5\n");
	printf_s("   Tabla de transformacion de tamperaturas\n");
	printf_s("               Instrucciones:\n");
	printf_s("   1.- Ingrese la opcion de menu que desee\n");
	printf_s("   2.- Ingrese rango de temperatura\n");
	printf_s("   3.- Ingrese el salto de temperatura de desee\n");
	printf_s("               Restricciones:\n");
	printf_s("   1.- Ingrese valores  decimales con un maximo de 3 cifras\n");
	printf_s("               2010-2011\n\n\n");
	
	int i, j;
	float to, tf, f1, c1;
	char elec;
	printf_s("PROGRAMA DE CONVERSION DE TEMPERATURA\n");
	printf_s("Elija un opcion: Celsius a Fahrenheit (c o C) o Fahrenheit a Celsius (f o F): ");
	elec = _getche();
	if (elec == 'c' || elec == 'C')
	{
		printf_s("\n\n\nIngrese la temperatura inicial: ");
		scanf_s("%f", &to);
		printf_s("Ingrese la temperatura final: ");
		scanf_s("%f", &tf);
		do
		{
			printf_s("Ingrese el incremento(1 o 2): ");
			scanf_s("%d", &j);
		} 
		while (j < 1 || j>2);
		c1 = to;
		printf_s("\n\    Tabla de valores de conversion");
		printf_s("\n Indice         Celcius    Fahrenheit");
		for (i = 1;i <= 100;i++)
		{
			f1 = (c1 * 9 / 5) + 32;
			printf_s("\n %d              %.1f       %.1f", i, c1, f1);
			c1 = c1 + j;
			if (c1 > tf)
			{
				i = 200;
			}
		}
	}
	if (elec == 'f' || elec == 'F')
	{
		printf_s("\n\n\nIngrese la temperatura inicial: ");
		scanf_s("%f", &to);
		printf_s("Ingrese la temperatura final: ");
		scanf_s("%f", &tf);
		do
		{
			printf_s("Ingrese el incremento(1 o 2): ");
			scanf_s("%d", &j);
		} 
		while (j < 1 || j>2);
		f1 = to;
		printf_s("\n\    Tabla de valores de conversion");
		printf_s("\n Indice         Fahrenheit    Celcius");
		for (i = 1;i <= 100;i++)
		{
			c1 = ((f1 - 32) * 5) / 9;
			printf_s("\n %d              %.1f           %.1f", i, f1, c1);
			f1 = f1 + j;
			if (f1 > tf)
			{
				i = 200;
			}
		}
	}
	_getch();
}
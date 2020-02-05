#include <stdio.h>
#include <conio.h>


void main()
{
	float suma = 0, prom, menor = 11, mayor = -1, nota;
	int cont = 1, c1 = 0;
	while (cont <= 14)
	{
		printf("Ingrese la Nota del alumno %d:\n", cont);
		scanf_s("%f", &nota);
		while (nota<0.00 || nota >10.00)
		{
			printf("ERROR, la nota debe estar entre 0 y 10\n");
			scanf_s("%f", &nota);
		}
		if (nota >= 6.00)
			c1 = c1 + 1;
		if (nota > mayor)
			mayor = nota;
		if (nota < menor)
			menor = nota;
		cont = cont + 1;
		suma = suma + nota;
	}
	prom = suma / 14;
	printf("El Promedio es %.2f\n\n", prom);
	printf("El total de Aprobados es %d\n", c1);
	printf("La Mayor nota fue %.2f\n", mayor);
	printf("%.2f corresponde a la nota menor\n", menor);
	_getch();
}
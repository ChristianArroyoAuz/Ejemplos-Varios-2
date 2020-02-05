#include <stdio.h>
#include <conio.h>
#include<math.h>
#include <cmath>


int main()
{
	float a, b, c, x1, x2, d, d1, x, y;
	printf_s("\n\nPrograma que calcula las raices de una ecuacion ax^2+bx+c");
	printf_s("\n\nIngrese a: ");
	scanf_s("%f", &a);
	printf_s("\n\nIngrese b: ");
	scanf_s("%f", &b);
	printf_s("\n\nIngrese c: ");
	scanf_s("%f", &c);
	d = ((b*b) - (4 * a*c));
	if (d < 0)
	{
		d = d * (-1);
		d1 = sqrt(d);
		x1 = abs(-(b / (2 * a)));
		x2 = abs(+(b / (2 * a)));
		printf_s("\n\nEl valor de la raiz X1 es: %f+%f¡", x1, x2);
		printf_s("\n\n\nEl valor de la raiz X2 es: %f-%f¡\n\n\n", x1, x2);
	}
	else
	{
		x = (-b - (sqrt((b*b) - (4 * a*c)))) / (2 * a);
		y = (-b + (sqrt((b*b) - (4 * a*c)))) / (2 * a);
		printf("\n\nEl valor de la raiz X1 es: %0.3f\n\n", x);
		printf("\n\nEl valor de la raiz X2 es: %0.3f\n\n", y);
	}
	return 0;
}
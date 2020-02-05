#include <windows.h>
#include <stdio.h>
#include <conio.h>


void main()
{
	float prim, seg, resul; 
	char oper;
	printf_s("\nOperacion a realizar (+,-,*,/): ");
	oper = _getche();
	if ((oper != '+') && (oper != '-') && (oper != '*') && (oper != '/'))
	{
		printf_s("\nOperacion no definida \n");
	}
	else
	{
		printf_s("\nPrimer numero: ");
		scanf_s("%f", &prim);
		printf_s("\nSegundo numero: ");
		scanf_s("%f", &seg);
	}
	switch (oper)
	{
		case '+':
			resul = prim + seg;
			printf_s("\nEl resultado de la operacion %f %c %f es %f\n", prim, oper, seg, resul);
			break;
		case '-':
			resul = prim - seg;
			printf_s("\nEl resultado de la operacion %f %c %f es %f\n", prim, oper, seg, resul);
			break;
		case '*':
			resul = prim * seg;
			printf_s("\nEl resultado de la operacion %f %c %f es %f\n", prim, oper, seg, resul);
			break;
		case '/':
			if (seg != 0)
			{
				resul = prim / seg;
				printf_s("\nEl resultado de la operacion %f %c %f es %f\n", prim, oper, seg, resul);
			}
			else
			{
				printf_s("\n Division para cero indefinida \n");
			}
			break;
		default:
			printf_s(" Opcion no habilitada \n");
	}
	_getche();
}
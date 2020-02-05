#include <windows.h>
#include<stdio.h>
#include<conio.h>
 

void main()
{
	int seg, min, hora;
	seg = 0;
	min = 0;
	hora = 0;
	printf_s("\rLa hora es: %d: %d: %d", hora, min, seg);
	while (hora <= 23)
	{
		while (min <= 59)
		{
			while (seg <= 59)
			{
				seg = seg + 1;
				printf_s("\rLa hora es: %d: %d: %d", hora, min, seg);
				Sleep(1000);
			}
			seg = 0;
			min = min + 1;
			printf_s("\rLa hora es: %d: %d: %d", hora, min, seg);
		}
		seg = 0;
		min = 0;
		hora = hora + 1;
		printf_s("\rLa hora es: %d: %d: %d", hora, min, seg);
	}
}
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}


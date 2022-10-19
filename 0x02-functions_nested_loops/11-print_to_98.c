#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
	}
	printf("\n");
}

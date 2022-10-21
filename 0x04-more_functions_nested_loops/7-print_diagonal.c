#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, k;

	if (n <= 0)
		_putchar('\n');

	for (x = o; x < n; x++)
	{
		for (k = 0; k < x; k++)
			_puthar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int x, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (k = 1; k < x; k++)
			{
				_puthar(' ');
			}
			_putchar('\\');
		}
	}
}

#include "main.h"

/**
 * print_line - a function that draws a straight line on the terminal
 * @n: input number of times to print
 * Return: a straight line
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n, x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @i: integer
 * @n: natural number
 * Return: evaluate sqrt
 */
int _evalute(int i, int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_manual(n, 1));
	}
}
/**
 * _sqrt_manual - evaluate sqrt
 * @n: natural number
 * Return: sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
	{
		return (_evaluate(i, n));
	}
}

#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 0)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * prints_alphabet_x10 -a function that prints 10 times the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int num;
	int la = 0;

	while (la < 10)
	{
		for (num = 'a'; num <= 'z'; num++)
		{
			_putchar(num);
		}
		lai++;
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
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

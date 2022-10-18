#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase
 */
void print_alphabet(void)
{
	char lower_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
		_putchar(lower_alpha);

	_putchar('\n');
}

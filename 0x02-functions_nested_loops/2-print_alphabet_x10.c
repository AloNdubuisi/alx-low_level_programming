#include "main.h"

/**
 * prints_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void);
{
	int ten;
	char lower_alpha;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
			_putchar(lower_alpha);
		_putchar('\n');
	}
}

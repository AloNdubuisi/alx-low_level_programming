#include <stdio.h>

/**
 * main - prints the alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}

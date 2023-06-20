#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char alpha, j;

	for (j = 1; j <= 10; j++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

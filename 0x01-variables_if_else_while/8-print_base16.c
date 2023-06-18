#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	char ba;

	for (ba = '0'; ba <= '9';)
	{
		putchar(ba);
		(ba++);
	}

	for (ba = 'a'; ba <= 'f';)
	{
		putchar(ba);
		(ba++);
	}
	putchar('\n');

	return (0);
}

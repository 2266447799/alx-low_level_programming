#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		(i++);
	}
	putchar('\n');

	return (0);
}

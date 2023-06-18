#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		(i++);
	}
	putchar('\n');

	return (0);
}

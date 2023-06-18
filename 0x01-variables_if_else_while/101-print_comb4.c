#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	int n, m, i;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (i = m + 1; i <= 9; i++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(i + '0');
				if (n != 7 || m != 8 || i != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

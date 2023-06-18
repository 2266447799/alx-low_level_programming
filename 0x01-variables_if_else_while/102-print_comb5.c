#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
		for (m = n; m <= 99; m++)
		{
			if (n != m)
			{
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				putchar(' ');
				putchar(m / 10 + '0');
				putchar(m % 10 + '0');
				if (n != 98 || m != 99)
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

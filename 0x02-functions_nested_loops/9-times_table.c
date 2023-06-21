#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			d = (r * c);
			if (c > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (d < 10)
					_putchar(' ');
			}
			if (d < 10 && c > 0)
				_putchar(',');
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}

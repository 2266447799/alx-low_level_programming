#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	{
		(ch++);
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}

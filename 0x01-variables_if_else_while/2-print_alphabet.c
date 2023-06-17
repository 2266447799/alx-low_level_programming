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
		putchar(ch);
		(ch++);
	}
	putchar('\n');

	return (0);
}

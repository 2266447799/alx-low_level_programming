#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9;)
	{
		putchar(num + '0');
		(num++);
	}
	putchar('\n');

	return (0);
}

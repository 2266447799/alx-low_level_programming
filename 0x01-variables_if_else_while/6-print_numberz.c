#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Succes)
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

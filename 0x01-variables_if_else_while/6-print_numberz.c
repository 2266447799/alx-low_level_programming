#include <stdio.h>

/**
 * main - This the entry point
 *
 * Return: return 0 (Succes)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 10;)
	{
		putchar('0' + num);
		(num++);
	}
	putchar('\n');

	return (0);
}

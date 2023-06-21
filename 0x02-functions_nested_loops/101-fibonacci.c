#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: returns 0.
 */

int main(void)
{
	int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("\n");

	return (0);
}

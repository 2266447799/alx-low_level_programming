#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 * Return: 0.
 */
int main(void)
{
	int a, b, c;

	srand(time(NULL));
	c = 2772;
	a = 0;
	while (a < (c - 122))
	{
		b = (rand() % (122 - 97 + 1)) + 97;
		printf("%c", b);
		a = a + b;
	}
	b = c - a;
	printf("%c", b);
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - This the entry point
 *
 * Return: return 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	int lastDigit = n % 10;

	printf("Last digit of %d", n);
	printf(" is %d", lastDigit);

	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	} else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	} else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

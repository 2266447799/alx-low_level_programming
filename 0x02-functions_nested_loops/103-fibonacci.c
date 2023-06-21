#include <stdio.h>

/**
 * main - fibonacci sequence
 *
 * Return: return 0.
 */

int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float total;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		a = b;
		b = sum;
	}
	printf("%.0f\n", total);

	return (0);
}

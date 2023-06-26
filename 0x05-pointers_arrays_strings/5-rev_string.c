#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int a, b, length;
	char rev1, rev2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	a = length - 1;
	b = 0;

	while (a > b)
	{
		rev1 = s[b];
		rev2 = s[a];
		s[b] = rev2;
		s[a] = rev1;
		a--;
		b++;
	}
}

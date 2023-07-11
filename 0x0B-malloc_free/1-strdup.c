#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string as a parameter
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *m;
	int i, count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		count++;

	m = malloc((count + 1) * sizeof(char));

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		m[i] = str[i];
	}
	m[count] = '\0';

	return (m);
}

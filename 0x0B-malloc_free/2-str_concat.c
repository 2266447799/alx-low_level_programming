#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the string
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, len = 0, c = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	m = malloc(len * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		m[c++] = s1[i];

	for (i = 0; s2[i]; i++)
		m[c++] = s2[i];

	return (m);
}

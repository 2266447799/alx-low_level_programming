#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *p = needle;

		while (*h == *p && *p != '\0')
		{
			h++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

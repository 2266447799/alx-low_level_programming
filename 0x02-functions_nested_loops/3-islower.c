#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be cheked
 *
 * Return: returns 1 if success, 0  otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

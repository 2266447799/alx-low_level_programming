#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: returns 1
 * on error, -1 is retuened, error is set appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

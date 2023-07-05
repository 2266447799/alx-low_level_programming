#include <unistd.h>

/**
 * print_char - prints characters
 * @c: character to be printed
 */
void print_char(char c)
{
	write(1, &c, 1);
}

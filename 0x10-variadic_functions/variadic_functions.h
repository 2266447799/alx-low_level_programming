#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct formater - finds the format of info
 * @symbol: representing data type
 * @print: function pointer to a function that prints a data type
 * corresponding to the given symbol
 */

typedef struct formater
{
	char *symbol;
	void (*print)(va_list arg);

} formater_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

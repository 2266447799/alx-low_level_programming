#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints character
 * @ap: argument
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints integer
 * @ap: argument
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print float
 * @ap: argument
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: argument
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list aps;
	int i, j;
	char *separator = "";

	formater_t formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(aps, format);
	i = 0;

	while (format && format[i] != '\0')
	{
		j = 0;
		while (formats[j].symbol != NULL)
		{
			if (*(formats[j].symbol) == format[i])
			{
				printf("%s", separator);
				(formats[j].print)(aps);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(aps);
}

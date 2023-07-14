#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints a formatted string to the standard output
 *
 * @format: Format for the string to be printed
 *
 * Return: Number of bytes printed on success, a negative number on failure
 */

int _printf(char *format, ...)
{
	int argsn;
	int i = 0;
	char c;
	int nchars = 0;
	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}

	argsn = _strlen(format);
	va_start(ap, format);

	for (i = 0; i < argsn; i++)
	{
		if (format[i] == '%')
		{
			i++;
			c = format[i];
			nchars = nchars + (*get_func(c))(ap);
		} else
		{
			_putchar(format[i]);
			nchars++;
		}
	}

	va_end(ap);
	return (nchars);
}

#include <stdarg.h>
#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

int _printf(char *format, ...)
{
	int argsn = _strlen(format);
	int i = 0;
	char c;
	int nchars = 0;
	va_list ap;

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

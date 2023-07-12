#include <stdarg.h>
#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

int _printf(char *s, ...)
{
	int argsn = _strlen(s);
	int i = 0;
	va_list ap;

	va_start(ap, s);

	for (i = 0; i < argsn; i++)
	{
		_putchar(s[i]);
	}

	va_end(ap);

	return (i);
}

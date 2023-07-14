#include "main.h"

/**
 * _put_arg_s - Puts a string from va_list using va_arg
 *
 * @ap: va_list declared in _printf
 *
 * Return: The number of bytes written out
 */

int _put_arg_s(va_list ap)
{
	int i;
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		_puts("(null)");
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

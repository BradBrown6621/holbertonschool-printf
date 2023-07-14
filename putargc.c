#include "main.h"

/**
 * _put_arg_c - Puts a character from ap
 *
 * @ap: va_list ap declared in _printf
 *
 * Return: write(1, &c, 1)
 */

int _put_arg_c(va_list ap)
{
	char c = va_arg(ap, int);

	return (write(1, &c, 1));
}

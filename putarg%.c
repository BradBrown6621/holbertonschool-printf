#include "main.h"

/**
 * _put_arg_perc - Puts a percent sign
 *
 * @ap: va_list ap declared in _printf
 *
 * Return: write(1, &c, 1);
 */

int _put_arg_perc(va_list ap)
{
	char c = '%';

	if (ap)
	{
		return (write(1, &c, 1));
	}
	return (write(1, &c, 1));
}

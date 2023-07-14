#include "main.h"

/**
 * _get_int - Pulls va_arg(integer) from va_list
 *
 * @ap: The va_list ap from _printf
 *
 * Return: The result of _print_int
 */

int _get_int(va_list ap)
{
	int nbytes = 0;
	int i = va_arg(ap, int);

	return (_print_int(i, nbytes));
}

/**
 * _print_int - Prints an integer value to the standard output
 *
 * @i: The integer arguement to be printed
 *
 * @nbytes: The number of bytes printed
 *
 * Return: nbytes ALWAYS
 */

int _print_int(int i, int nbytes)
{
	int overflowBuffer = 0;

	if (i < 0)
	{
		i = (i + 1) * -1;
		overflowBuffer = 1;
		_putchar(45);
		nbytes++;
	}

	if (i / 10 <= 0)
	{
		_putchar(i + 48 + overflowBuffer);
		nbytes++;
		return (nbytes);
	}
	if (i == 0 && overflowBuffer != 1)
	{
		_putchar(48);
		nbytes++;
	}
	nbytes++;
	nbytes = _print_int((i / 10), nbytes);
	_putchar((i % 10) + overflowBuffer + 48);
	return (nbytes);
}

#include "main.h"

/**
 * main - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: Num of characters printed
 */

int _get_int(va_list ap)
{
	int nbytes = 0;
	int i = va_arg(ap, int);

	return (_print_int(i, nbytes));
}

int _print_int(int i, int nbytes)
{
	int overflowBuffer = 0;
	if (i < 0)
	{
		i = (i + 1) * -1;
		overflowBuffer = 1;
		_putchar(45);
	}
		
	if (i / 10 <= 0)
	{
		_putchar(i + 48);
		return (nbytes * 4);
	}
	nbytes++;
	_print_int((i / 10), nbytes);
	_putchar((i % 10) + overflowBuffer + 48);
	return (nbytes);
}

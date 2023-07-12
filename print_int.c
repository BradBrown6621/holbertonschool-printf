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
	unsigned int nbytes = 0;
	unsigned int i = va_arg(ap, unsigned int);
	return (_print_int(i, nbytes));
}

int _print_int(unsigned int i, unsigned int nbytes)
{
	if (i % 10 == 0)
	{
		return (nbytes * 4);
	}

	_putchar((i % 10) + 48);
	i = i / 10;
	nbytes++;
	return (_print_int(i, nbytes));
}

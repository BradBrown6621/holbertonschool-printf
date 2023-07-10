#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: Num of characters printed
 */

int print_int(int input)
{
	int tmp;
	int i;

	if (input == 0)
	{
		i = 0;
		return (i);
	}

	tmp = (input % 10) + 48;
	i = print_int(input / 10);
	putchar(tmp);
	i++;

	return (i);
}

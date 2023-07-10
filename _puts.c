#include <stdio.h>
#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[i]);
	}
}

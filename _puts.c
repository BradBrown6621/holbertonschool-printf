#include "main.h"

/**
 * _puts - Puts a string to standard output
 *
 * @s: String to be printed
 *
 * Return: The number of bytes printed
 */

int _puts(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

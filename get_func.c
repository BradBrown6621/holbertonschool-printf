#include "main.h"
#include <stdio.h>

/**
 * get_func - A pointer to a function that prints va_arg
 *
 * @s: The specifier used for _printf
 *
 * Return: The name of the function required for printing va_arg
 */

int (*get_func(char s))(va_list ap)
{
	int i = 0;

	/**
	 * struct spec_t - The data structure used to determine which
	 *			function to use to print va_arg
	 *
	 * Description - See above
	 */

	spec_t functions[] = {
		{"c", _put_arg_c},
		{"s", _put_arg_s},
		{"d", _get_int},
		{"i", _get_int},
		{"%", _put_arg_perc},
		{NULL, invalid_spec},
		{NULL, is_null}
	};

	while ((functions[i]).s != NULL)
	{
		if (*(functions[i].s) == s)
		{
			return (functions[i].func);
		}
		i++;
	}
	if (s == '\0')
	{
		return (functions[i + 1].func);
	}
	_putchar(37);
	_putchar(s);
	return (functions[5].func);
}

/**
 * invalid_spec - This is referenced when an invalid specifier immediately
 *			follows a "%".
 * @ap: va_list ap declared in _printf
 *
 * Return: 2 ALWAYS
 */

int invalid_spec(va_list ap)
{
	if (ap)
	{
		return (2);
	}
	return (2);
}

/**
 * is_null - This is used when format contains only a "\0" and nothing else
 *
 * @ap: va_list ap declared in _printf
 *
 * Return: -1 (ALWAYS)
 */

int is_null(va_list ap)
{
	if (ap)
	{
		return (-1);
	}
	return (-1);
}

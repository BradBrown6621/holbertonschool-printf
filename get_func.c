#include "main.h"
#include <stdio.h>

int (*get_func(char s))(va_list ap)
{
	int i = 0;

	spec_t functions[] = {
		{"c", _put_arg_c},
		{"s", _put_arg_s},
		{"d", _get_int},
		{"i", _get_int},
		{"%", _put_arg_perc},
		{NULL, invalid_spec},
		{NULL, _null}
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
	return (functions[4].func);
}

int invalid_spec(va_list ap)
{
	if (ap)
	{
		return (2);
	}
	return (2);
}

int _null(va_list ap)
{
	if (ap)
	{
		return (-1);
	}
	return (-1);
}

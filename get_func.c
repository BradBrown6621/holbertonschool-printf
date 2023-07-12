#include "main.h"
#include <stdio.h>

int (*get_func(char s))(va_list ap)
{
	int i = 0;

	spec_t functions[] =
	{
		{"c", _put_arg_c},
		{"s", _put_arg_s},
		{"%", _put_arg_c},
		{"i", _get_int},
		{NULL, invalid_spec}
	};

	while ((functions[i]).s != NULL)
	{
		if (*(functions[i].s) == s)
		{
			return (functions[i].func);
		}
		i++;
	}
	_putchar(37);
	_putchar(s);
	return (functions[3].func);
}

int invalid_spec(va_list ap)
{
	if (ap)
	{
		return (2);
	}
	return (2);
}
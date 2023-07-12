#include "main.h"

int _put_arg_s(va_list ap)
{
	int i;
	char *s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	    return (i);
}

#include "main.h"

int _put_arg_c(va_list ap)
{
	char c = va_arg(ap, int);

	return (write(1, &c, 1));
}

#include "main.h"

int _put_arg_perc(va_list ap)
{
	char c = '%';
	if (ap)
	{
		return write(1, &c, 1);
	}
	return write(1, &c, 1);
}

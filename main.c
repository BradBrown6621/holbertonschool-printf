#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
	int test = _printf("%!\n", 0);
	int test2 = printf("%!\n", 0);
	printf("%i\n", test2);
	return (test);
}

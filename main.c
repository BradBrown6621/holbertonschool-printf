#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
	int test = _printf("There is %d bytes in %d KB\n", 1024, 1);
	int test2 = printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("%i\n", test2);
	return (test);
}

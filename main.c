#include "main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int test = INT_MAX;

	test = print_int(test);

	printf("\n%i", test);

	return (test);
}

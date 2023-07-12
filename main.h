#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct specifiers
{
	char *s;
	int (*func)(va_list);
} spec_t;

int _printf(char *string, ...);
int (*get_func(char))(va_list);
int _strlen(const char *s);

int _putchar(char c);
int _put_arg_c(va_list);
int _put_arg_s(va_list);
int _get_int(va_list);
int _print_int(unsigned int, unsigned int);

int invalid_spec(va_list);

#endif

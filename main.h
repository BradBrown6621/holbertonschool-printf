#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifiers - The format for spec_t's struct
 *
 * @s: A character used as a specifier
 * @func: A pointer to the necessary function used to print va_arg
 *
 * Description: This struct is used to format the elements in spec_t's
 *		struct later in the program.
 */

typedef struct specifiers
{
	char *s;
	int (*func)(va_list);
} spec_t;

int _printf(char *format, ...);
int (*get_func(char))(va_list);
int _strlen(const char *s);

int _putchar(char c);
int _puts(char *);
int _put_arg_c(va_list);
int _put_arg_s(va_list);
int _put_arg_perc(va_list);
int _get_int(va_list);
int _print_int(int, int);

int invalid_spec(va_list);
int is_null(va_list);

#endif

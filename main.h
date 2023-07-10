#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <limits.h>

typedef struct specifiers
{
	char s;
	int (*func)(char *s, int i);
} spec_t;

int print_int(int);
int _putchar(char c);
int _puts(char *s);
int main(void);

#endif

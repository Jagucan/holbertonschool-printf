#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct print
{
	int *p;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int get_func(char s, va_list ap);
int print_c(va_list ap);

#endif

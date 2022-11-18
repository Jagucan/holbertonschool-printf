#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct print
{
	char *p;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int get_func(const char *format, int *s, va_list ap);
int print_c(va_list ap);
int print_s(va_list ap);
int print_p(va_list ap);

#endif
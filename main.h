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
	void (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_di(va_list elements);
int _print_u(va_list elements);
int _print_o(va_list elements);
int _print_xX(va_list elements);
int _print_c(va_list elements);
int _print_s(va_list elements);
int _print_p(va_list elements);
int _print_percent(va_list elements);
int _print_r(va_list elements);

#endif

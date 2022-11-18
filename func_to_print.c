#include "main.h"

int print_c(va_list ap)
{
	char printc;

	printc = va_arg(ap, int);
	_putchar(printc);
	return (1);
}
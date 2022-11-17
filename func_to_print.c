#include "main.h"

int print_c(va_list element)
{
	char printc;

	printc = va_arg(element, int);
	_putchar(printc);
	return (1);
}
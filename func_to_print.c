#include "main.h"

int print_c(va_list ap)
{
	int printc;

	printc = va_arg(ap, int);
	_putchar(printc);
	return (1);
}

/*int print_p(va_list ap)
{
    _putchar('%');
    return(1);
}*/
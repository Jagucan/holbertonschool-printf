#include "main.h"

int _printf(const char *format, ...)
{

	va_list elements;
    
	char len = 0;
    int a = 0;

    va_start(elements, format);
    
        
        while (format[a])
        {
            a++;
            _putchar(len);
            len = *(format + a -1);
            
        }
	_putchar('\n');
    va_end(elements);
	return(a);
}

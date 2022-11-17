#include "main.h"

int _printf(const char *format, ...)
{
    va_list elements;
    
	char *buffer;
	int a = 0;
	int count = 0;
	
    va_start(elements, format);
    
	if(!format)
		exit(1);
	
	buffer = malloc((sizeof(char) * count) + 1);

	while (format[a])
		{
			if(format[a] != '%')
			{
				count++;
				buffer = realloc(buffer, count);
				buffer[a] = format[a];
			}

			else
			{
			    
			    count = get_func_print;
			    a++;
			}
		}
	
	_putchar(count);
	return(count);
	va_end(elements);
}

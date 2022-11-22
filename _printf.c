#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	
//	char *buffer;
	int a = 0;
	int count = 0;
	
	va_start (ap, format);
	
	if (!format)
		exit(1);

//	buffer = malloc((sizeof(char) * count) + 1);

	while (format[a])
	{
		if (format[a] != '%')
		{
		   count += _putchar(format[a]);
	       count++;
		}
		
		else if (format[a + 1] == '%')
		{
		    count += _putchar(format[a + 1]);
		    count++;
		    a++;
		}

		else
		{
		   count += get_func(format[a + 1], ap);
	       count++;
	       a++;
		}
	   a++;

	}
	return (count);
//    free(buffer);
	va_end(ap);
}
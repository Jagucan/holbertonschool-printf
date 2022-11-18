#include "main.h"

 int _printf (const char *format, ...) 
{
	va_list ap;
	
	char *buffer;
	int a = 0, count = 0;

	va_start (ap, format);

	if (!format)
		exit (1);
	
	while (format[a])
    	{
	        if (format[a] != '%')
	        {
				write(1, &format[a], 1);
				count++;
	        }
            else
            {
	            count += get_func(format, ap, a);
	            a++;
            }
             a++;
	    }
	return (count); 
	va_end (ap);
}

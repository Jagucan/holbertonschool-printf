#include "main.h"

 int _printf (const char *format, ...) 
{
	va_list ap;
	
	char *buffer;
	int a = 0, count = 0;

	va_start (ap, format);

	if (!format)
		exit (1);
	
	while (format && format[a])
    	{
	        if (format[a] != '%')
	        {
				count++;
				write(1, &format[a], 1);
	        }
            else
            {
	            count += get_func(format, ap, buffer);
	            a++;
	           
            }
             a++;
	    }
	return (count); 
	va_end (ap);
}

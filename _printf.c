#include "main.h"

 int _printf (const char *format, ...) 
{
	va_list ap;
	
	int nd = 0;
	int a = 0, count = 0;
	


	va_start (ap, format);

	if (!format)
		exit (1);
	
	while (format[a] && format)
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
	va_end (ap);
	return (count); 
	
}

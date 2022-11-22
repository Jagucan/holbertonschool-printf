#include "main.h"

int _printf(char *format, ...)
{
	va_list ap;
	size_t len = 0;
	char buffer[2000];
	int a = 0;
	int (*cases_print)(va_list, char *, int ); 
	
	va_start (ap, format);
	
	if (!format)
		exit(1);

	while (format[a])
	{
		if (format[a] != '%')
		{
	        buffer[len] = format[a];
			len += 1;
		}
		else
		{
		    cases_print = get_print_cases(&(format[a + 1]));
		    if (cases_print != NULL)
		    {
		        len = cases_print(ap, &buffer[len], len);
				a++;
		    }
		    else
		    {
			buffer[len] = format[a];
                        len += 1;
		    }
		}
	  a++;
	}
	write(1, buffer, len);
	va_end(ap);
	return (len);
}

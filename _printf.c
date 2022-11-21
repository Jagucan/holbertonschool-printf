#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	
	char *buffer;
	int a = 0;
	int count = 0;
	
	va_start (ap, format);
	
	if (!format)
		exit(1);

   buffer = malloc(5000);

	while (format[a])
	{
		if (format[a] != '%')
		{
	        count++;
	        count = _putchar(format[a]); /* -> funciona con esto pero sale un porcentaje en todo */
	        
	     /*   buffer = realloc(buffer, count);
	        buffer[a] = format[a]; */
		}

	    else
	    {
		    switch (format[a])
		    {
			    case 'c':
				    count += _putchar(va_arg(ap, int));
				break;

			   /*case '%':
				    count = ;
				break;
				*/
		    }
	    }
	  a++;
	}
	return (count);
	free(buffer);
	va_end(ap);
}


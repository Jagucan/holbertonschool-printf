#include "main.h"

int _printf(const char *format, ...)
{

	char *buff;
	int a = 0;
	int count = 0;

	if(!format)
		exit(1);
	
	buff = malloc((sizeof(char) * count) + 1);

	while (format[a])
		{
			if(format[a] != '%')
			{
				count++;
				buff = realoc(buff, count);
				buff[a] = format[a];
			}

			else
				_putchar(); //funcion de manejo//
				a++;
		}
	_putchar('\n');
	return(count);
}

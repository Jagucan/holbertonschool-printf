#include "main.h"

int _printf(const char *format, ...)
{

	char *buffer;
	int a = 0;
	int count = 0;

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
				_putchar(count); 
				a++;
			}
		}
	
	write(STDOUT_FILENO, buffer, count);
	free(buffer);
	return(count);
}

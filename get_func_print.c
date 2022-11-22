#include "main.h"
int (*get_print_cases(char *arg))(va_list, char *, int) 
{
	int i = 0;
	cases format[] = {
		{"c", print_c}, 
		{"s", print_s},
	};
	while (i < 2) 
	{
	    if (*arg == *(format[i]).print_cases)
			return ((format[i].cases_print));
		i++;
	}
	return (NULL);
}

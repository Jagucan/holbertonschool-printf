#include "main.h"

int (*get_print_cases(char *arg))(va_list, char *, int)
{
	cases format[] = {
		{"c", c_case},
		{"s", s_case},
		{"%", percent_case},
	};
	int i = 0;

	while (i < 3)
	{
		if (*arg == *(format[i]).print_cases)
			return ((format[i].cases_print));
		i++;
	}
	return (NULL);
}

#include "main.h"

/**
 * get_print_cases - Finds the case of the function.
 * @arg: Is the argument.
 * Return: The number of bytes to print.
 */

int (*get_print_cases(char *arg))(va_list, char *, int)
{
	cases format[] = {
		{"c", c_case},
		{"s", s_case},
		{"%", percent_case},
		{"d", di_case},
		{"i", di_case},
		{"o", o_case},
	};
	int i = 0;

	while (i < 5)
	{
		if (*arg == *(format[i]).print_cases)
			return ((format[i].cases_print));
		i++;
	}
	return (0);
}

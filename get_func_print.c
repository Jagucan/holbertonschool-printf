#include "main.h"

int get_func_print(char s, va_list element)
{
	print_f prn[] = {
		{"%c", print_c},
		{'\0', NULL},
	};
	
    int i;
    i = 0;
    
    while (prn[i].print != NULL)
    {
        if (prn[i].print == s)
            return (prn[i].f);
        i++;
    }
    
}
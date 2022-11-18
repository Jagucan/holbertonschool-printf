#include "main.h"


int get_func(const char *format, int *s, va_list ap)
{
    print_f prn[] = {
        {'c', print_c}, 
        {'%', print_p},
        {0, NULL}
    };
    int i = 0;

    while (prn[i].p != NULL)
    {
        if (format[*s + 1] == '\0')
            return (1);
       
        if (prn[i].p == 0)
        {
            write(1, format, 1);
            _putchar(format[*s + 1]);
        }
        i++;
    }
    return (i);
}
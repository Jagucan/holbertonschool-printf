#include "main.h"


int get_func(const char *format, int *s, va_list ap)
{
    print_f prn[] = {
        {'c', print_c}, 
        {'%', print_p},
        {0, NULL}
    };
    int i = 0;
    int a = 0;


    while(prn[i].p)
    {
        if (format[*s + 1] == NULL)
            exit(1);
            
        if (prn[i].p == NULL)
        {
            write(1, &format, 1);
            write(1, &format[*s + 1], 1);
        }
        
        if (prn[i].p == format[*s + 1])
        {
            a += prn[i].f(ap);
            a++;
        }
        i++;
    }
    return (a);
}
#include "main.h"

int get_func(char s, va_list ap)
{
	 print_f prn[] = {
		{'c', print_c}, 

    };
    int a;

	for (a = 0; prn[a].p; a++)
	{
		if (prn[a].p == s)
		
           a += prn[a].f(ap);
          // return(a);
		
	}
	return(a);
	write(1, &s, 1);
	return (1);
}
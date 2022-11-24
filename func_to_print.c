#include "main.h"

int c_case(va_list ap, char *buff, int len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
	    exit(1);
	c[0] = va_arg(ap, int);
	if (c[0] == 0)
		exit (1);
	len = replace(buff, c, len);
	free(c);
	return (len);
}

int s_case(va_list ap, char *buff, int len)
{
    	char *s;
	char *a;
	int len_s;

	a = va_arg(ap, char*);
	if (a == NULL)
		    exit(1);
	len_s = _strlen(a);
	s = malloc((sizeof(char) * len_s) + 1);
	if (s == NULL)
		exit (1);
	_strcpy(s, a);
	len = replace(buff, s, len);
	free(s);
	return (len);
}

int percent_case(va_list ap, char *buff, int len)
{
	char *p;
	p = malloc((sizeof(char) + 1));
	if (p == NULL)
		 return (1);
	p[0] = va_arg(ap, int);
	p[0] = '%';
	len = replace(buff, p, len);
	free(p);
	return (len);
}
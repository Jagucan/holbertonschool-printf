#include "main.h"

/**
 * d_case - Print a unsigned num.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int u_case(va_list ap, char *buff, int len)
{
	char *s;
	char *a;
	int s_len;
	unsigned int num;

	num = va_arg(ap, int);
	num = num * -1;

	a = malloc((sizeof(char) * num) + 1);

	if (a == NULL)
		return (1);
	
	a = _itoa(num, a, len);
	s_len = _strlen(a);

	s = malloc((sizeof(char) * num) + 1);

	if (s == NULL)
		return (1);
	
	_strcpy(s, a);
	len = replace(buff, s, len);
	free(s);
	free(a);
	return (len);
}

/**
 * o_case - Print a unsigned num octal.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int o_case(va_list ap, char *buff, int len)
{
	char *s;
	char *o;
	int s_len; 
	unsigned int num;

	num = va_arg(ap, int);

	o = malloc((sizeof(char) * num) + 1);

	if (o == NULL)
		return (1);

	o = _itoa(num, o, 8);
	s_len = _strlen(o);

	s = malloc((sizeof(char) * s_len) + 1);

	if (s == NULL)
		return (1);

	_strcpy(s, o);
	len = replace(buff, s, len);
	free(s);
	free(o);
	return (len);
}

/**
 * x_case - Print a unsigned num hexadecimal.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int x_case(va_list ap, char *buff, int len)
{
	char *s;
	char *x;
	int s_len; 
	unsigned int num;

	num = va_arg(ap, int);

	x = malloc((sizeof(char) * num) + 1);

	if (x == NULL)
		return (1);

	x = _itoa(num, x, 16);
	s_len = _strlen(x);

	s = malloc((sizeof(char) * s_len) + 1);

	if (s == NULL)
		return (1);

	_strcpy(s, x);
	len = replace(buff, s, len);
	free(s);
	free(x);
	return (len);
}

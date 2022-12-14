#include "main.h"

/**
 * c_case - Print a Character.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int c_case(va_list ap, char *buff, int len)
{
	char *c;

	c = malloc((sizeof(char) + 1));

	if (c == NULL)
		return (len);

	c[0] = va_arg(ap, int);

	if (c[0] == 0)
		len += 1;

	c[1] = '\0';
	len = replace(buff, c, len);
	free(c);
	return (len);
}

/**
 * s_case - Print a String.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int s_case(va_list ap, char *buff, int len)
{
	char *s;
	char *a;
	int len_s;

	a = va_arg(ap, char*);

	if (a == NULL)
		a = "(null)";

	len_s = _strlen(a);

	s = malloc((sizeof(char) * len_s) + 1);

	if (s == NULL)
		return (1);

	_strcpy(s, a);
	len = replace(buff, s, len);
	free(s);
	return (len);
}

/**
 * percent_case - Print a Percent.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int percent_case(va_list ap, char *buff, int len)
{
	char *p;

	p = malloc((sizeof(char)));

	if (p == NULL)
		return (1);

	p[0] = va_arg(ap, int);
	p[0] = '%';
	len = replace(buff, p, len);
	free(p);
	return (len);
}

/**
 * di_case - Print a numbers.
 * @ap: Is an argument.
 * @buff: Is the buffer.
 * @len: Is the length of the string.
 * Return: The length of the string.
*/

int di_case(va_list ap, char *buff, int len)
{
	char *s;
	char *a;
	int s_len, num;

	num = va_arg(ap, int);

	a = malloc(sizeof(char) * 35);

	if (a == NULL)
		return (1);

	a = _itoa(num, a, 10);
	s_len = _strlen(a);

	s = malloc((sizeof(char) * s_len) + 1);

	if (s == NULL)
		return (1);

	_strcpy(s, a);
	len = replace(buff, s, len);
	free(s);
	free(a);
	return (len);
}

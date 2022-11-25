#include "main.h"

/**
 * _itoa - Converts an intiger to string
 * @num: intiger to convert
 * @s: Pointer 
 * @base: Base to convert int
 * Return: Pointer to s
 */

char *_itoa(int num, char *s, unsigned int base)
{
	int i = 0, sign = 0, res;
	unsigned int a;

	if (num == 0)
	{
		s[i] = '0';
		s[i + 1] = '\0';
		return (s);
	}

	if (num < 0 && base == 10)
	{
		sign = 1;
		a = num * (-1);
	}
	else
		a = num;

	while (a > 0)
	{
		res = a % base;

		if (res > 9)
			s[i] = (res - 10) + 'a';
		else
			s[i] = res + '0';
		a = a / base;
		i++;
	}

	if (sign == 1)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	rev_string(s);
	return (s);
}

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 * Return: The length of @s.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;

	return (length);
}

/**
 * _strcpy - Copy the string pointer dest to src.
 * @dest: Is a pointer.
 * @src: Is an another pointer.
 * Return: The value of pointer dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}

/**
 * rev_string - reverses a string.
 * @s: Is the string to rersed.
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char len;

	while (s[i++])
		a++;

	for (i = a  - 1; i >= a / 2; i--)
	{
		len = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = len;
	}
}

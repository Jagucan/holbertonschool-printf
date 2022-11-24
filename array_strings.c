#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
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
 * _strncpy - Copies a string.
 * @dest: Is a pointer.
 * @src: Is another pointer.
 * @n: Are the number of characters to copy.
 * Return: Return dest.
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

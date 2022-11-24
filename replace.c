#include "main.h"

/**
 * replace - Puts s string on pointer buffer
 * @buffer: Destination buffer
 * @s: String to put
 * @len: Final position
 * Return: Final position
 */

int replace(char *buffer, char *s, int len)
{
	int i = 0;

	while (s[i])
	{
		buffer[i] = s[i];
		len += 1;
		i++;
	}
	return (len);
}

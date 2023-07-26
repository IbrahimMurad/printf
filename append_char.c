#include <stdlib.h>
#include "main.h"

/**
 * append_char - appends a character to the buffer
 * @buf: the buffer
 * @c: the character
 *
 * Return: a pointer to the buffer
 */

char *append_char(char *buf, char c)
{
	int i = 0;

	while (buf[i])
	{
		i++;
	}
	buf[i] = c;
	buf[i + 1] = '\0';
	return (buf);
}

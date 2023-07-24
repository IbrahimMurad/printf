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
	char *temp_buf;

	temp_buf = malloc(str_len(buf) + 2);
	while (buf[i])
	{
		temp_buf[i] = buf[i];
		i++;
	}
	temp_buf[i] = c;
	temp_buf[i + 1] = '\0';
	return (temp_buf);
}

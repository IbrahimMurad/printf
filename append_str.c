#include <stdlib.h>
#include "main.h"

/**
 * append_str - appends a string to the buffer
 * @buf: the buffer
 * @str: the string
 *
 * Return: apointer to the buffer
 */

char *append_str(char *buf, char *str)
{
	int i = 0, j = 0;

	while (buf[i])
	{
		i++;
	}
	while (str[j])
	{
		buf[i] = str[j];
		i++;
		j++;
	}
	buf[i] = str[j];
	return (buf);
}

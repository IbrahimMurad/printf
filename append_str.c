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
	char *temp_buf;

	temp_buf = malloc(str_len(buf) + str_len(str) + 2);
	while (buf[i])
	{
		temp_buf[i] = buf[i];
		i++;
	}
	while (str[j])
	{
		temp_buf[i] = str[j];
		i++;
		j++;
	}
	temp_buf[i] = str[j];
	return (temp_buf);
}

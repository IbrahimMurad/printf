#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_cpy - copies a string to buffer
 * @buf: the buffer
 * @s: the string
 *
 * Return: 0 (success)
 * or -1 (failed)
 */

char *str_cpy(char *buf, char *s)
{
	int len, i = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	len = str_len(s);
	buf = malloc(len + 1);
	while (s[i])
	{
		buf[i] = s[i];
		i++;
	}
	return (buf);
}

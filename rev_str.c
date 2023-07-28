#include "main.h"
#include <stdlib.h>

/**
 * rev_str - reverses a string
 * @s: the string to be reversed
 *
 * Return: a pointer to the reversed string
 */

char *rev_str(char *buf, char *s)
{
	int len, i;
	char temp;

	if (s == NULL)
	{
		return (NULL);
	}
	len = str_len(s);
	buf = str_cpy(buf, s);
	for (i = 0; i < len / 2; i++)
	{
		temp = buf[i];
		buf[i] = buf[len - i - 1];
		buf[len - i - 1] = temp;
	}
	buf[len] = '\0';
	return (buf);
}

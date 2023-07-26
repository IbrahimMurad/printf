#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * only_printed_chars - copies a string to buffer but only printed characters
 * other characters are replaced by \x(the ASCII value of the char)
 * @buf: the buffer to which the string is written
 * @s: the string
 *
 * Return: 0 (success)
 * or -1 (failed)
 */

char *only_printed_chars(char *buf, char *s)
{
	int i = 0;
	char *c = NULL;

	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] > 31)
		{
			buf = append_char(buf, s[i]);
		}
		else
		{
			buf = append_str(buf, "\\x");
			c = _itos(s[i]);
			buf = append_str(buf, c);
		}
		i++;
	}
	free(c);
	return (buf);
}

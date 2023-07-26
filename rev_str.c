#include "main.h"
#include <stdlib.h>

/**
 * rev_str - reverses a string
 * @s: the string to be reversed
 *
 * Return: a pointer to the reversed string
 */

char *rev_str(char *s)
{
	int len, i;
	char temp;

	if (s == NULL)
	{
		return (NULL);
	}
	len = str_len(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	return (s);
}

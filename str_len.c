#include <stdlib.h>
#include "main.h"
/**
 * str_len - gets the length of the passed string
 * @s: the string
 *
 * Return: the length of the string (success)
 * or -1 if failed
 */

int str_len(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (-1);
	}
	while (s[i])
	{
		i++;
	}
	return (i);
}

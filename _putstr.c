#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putstr - prints a string
 * @s: the string to be printed
 *
 * Return: the number of printed bytes (success)
 * -1 (failed)
 */

int _putstr(char *s)
{
	int len, printed = 0;
	char *temp_s = NULL;

	if (s == NULL)
	{
		temp_s = str_cpy(temp_s, "(null)");
		printed += write(1, temp_s, 6);
		free(temp_s);
		return (printed);
	}
	else
	{
		len = str_len(s);
		printed += write(1, s, len);
		return (printed);
	}
}

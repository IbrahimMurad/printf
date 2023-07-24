#include "main.h"
#include <stdlib.h>

/**
 * num_printf - prints any related number conversions to a buffer
 * @n: the number
 * @c: the conversion specifier
 *
 * Return: a pointer to the buffer
 */

char *num_printf(int n, char c)
{
	char *buf = malloc(1024);

	buf[0] = '\0';
	switch (c)
	{
		case 'd':
		case 'i':
			buf = _putnum(buf, n, 10);
			break;
		case 'x':
			buf = _putnum(buf, n, 16);
			break;
		default:
			break;
	}
	return (buf);
}

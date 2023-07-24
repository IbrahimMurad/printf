#include "main.h"
#include <stdlib.h>

/**
 * unsigned_printf - prints any related number conversions to a buffer
 * @n: the number
 * @c: the conversion specifier
 *
 * Return: a pointer to the buffer
 */

char *unsigned_printf(unsigned int n, char c)
{
	char *buf = malloc(1024);

	buf[0] = '\0';
	switch (c)
	{
		case 'b':
			buf = _putunsigned(buf, n, 2);
			break;
		case 'o':
			buf = _putunsigned(buf, n, 8);
			break;
		case 'X':
			buf = _putunsigned(buf, n, 16);
			break;
		case 'u':
			buf = _putunsigned(buf, n, 10);
			break;
		default:
			break;
	}
	return (buf);
}
#include <unistd.h>
#include "main.h"

/**
 * _putunsigned - prints an integer according to the base number
 * @buf: the buffer where the number is written
 * @num: the number to be printed
 * @base: the number's base
 *
 * Return: the number of printed bytes
 */

char *_putunsigned(char *buf, unsigned int num, unsigned int base)
{
	char c[] = "0123456789ABCDEF";

	if (num < base)
	{
		buf = append_char(buf, c[num]);
	}
	else
	{
		buf = _putunsigned(buf, ((num) / (base)), base);
		buf = append_char(buf, c[num % base]);
	}
	return (buf);
}

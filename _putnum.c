#include <unistd.h>
#include "main.h"

/**
 * _putnum - prints an integer according to the base number
 * @buf: the buffer where the number is written
 * @num: the number to be printed
 * @base: the number's base
 *
 * Return: the number of printed bytes
 */

char *_putnum(char *buf, int num, unsigned int base)
{
	char c[] = "0123456789abcdef";
	unsigned int temp_num;
	char sign = '-';

	if (base == 10 && num < 0)
	{
		temp_num = -num;
		buf = append_char(buf, sign);
	}
	else
	{
		temp_num = num;
	}
	if (temp_num < base)
	{
		buf = append_char(buf, c[temp_num]);
	}
	else
	{
		buf = _putnum(buf, temp_num / base, base);
		buf = append_char(buf, c[temp_num % base]);
	}
	return (buf);
}

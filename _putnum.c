#include <unistd.h>
#include "main.h"

/**
 * _putnum - prints an integer according to the base number
 * @num: the number to be printed
 * @base: the number's base
 *
 * Return: the number of printed bytes
 */

int _putnum(int num, unsigned int base)
{
	char c[] = "0123456789abcdef";
	unsigned int temp_num;
	int printed = 0;
	char sign = '-';

	if (num < 0)
	{
		temp_num = -num;
		if (base == 10)
		{
			printed += write(1, &sign, 1);
		}
	}
	else
	{
		temp_num = num;
	}
	
	if (temp_num < base)
	{
		printed += write(1, &c[temp_num], 1);
	}
	else
	{
		printed += _putnum(temp_num / base, base);
		printed += write(1, &c[temp_num % base], 1);
	}
	return (printed);
}

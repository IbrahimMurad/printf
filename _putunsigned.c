#include <unistd.h>
#include "main.h"

/**
 * _putunsigned - prints an integer according to the base number
 * @num: the number to be printed
 * @base: the number's base
 *
 * Return: the number of printed bytes
 */

int _putunsigned(unsigned int num, unsigned int base)
{
	char c[] = "0123456789ABCDEF";
	int printed = 0;

	if (num < base)
	{
		printed += write(1, &c[num], 1);
	}
	else
	{
		printed += _putunsigned(num / base, base);
		printed += write(1, &c[num % base], 1);
	}
	return (printed);
}

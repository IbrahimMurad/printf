#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * vprint - handles conversions
 * @c: the character that indicats to the type of conversion
 * @args: the va_list pointer to the current argument
 *
 * Return: the number of printed bytes (success)
 * or -1 (failed)
 */

int vprint(char c, va_list args)
{
	int printed = 0;
	va_list temp_args;
	va_copy(temp_args, args);

	switch (c)
	{
		case 'c':
			printed += _putchar(va_arg(temp_args, int));
			break;
		case '%':
			printed += _putchar('%');
			break;
		case 's':
			printed += _putstr(va_arg(temp_args, char *));
			break;
		case 'i':
		case 'd':
			printed += _putnum(va_arg(temp_args, int), 10);
			break;
		case 'b':
			printed += _putunsigned(va_arg(temp_args, int), 2);
			break;
		case 'u':
			printed += _putunsigned(va_arg(temp_args, unsigned int), 10);
			break;
		case 'o':
			printed += _putunsigned(va_arg(temp_args, int), 8);
			break;
		case 'x':
			printed += _putnum(va_arg(temp_args, int), 16);
			break;
		case 'X':
			printed += _putunsigned(va_arg(temp_args, int), 16);
			break;
		default:
			printed += _putchar('%');
			printed += _putchar(c);
			break;
	}
	return (printed);
}

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

	switch (c)
	{
		case 'c':
			printed += _putchar(va_arg(args, int));
			break;
		case '%':
			printed += _putchar('%');
			break;
		case 's':
			printed += _putstr(va_arg(args, char *));
			break;
		default:
			return (-1);
	}
	return (printed);
}

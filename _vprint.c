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
	char *buf = malloc(1024);

	if (buf == NULL)
	{
		return (-1);
	}
	buf[0] = '\0';
	switch (c)
	{
		case 's':
			printed += _putstr(va_arg(args, char *));
			break;
		case 'c':
			printed += _putchar(va_arg(args, int));
			break;
		case '%':
			printed += _putchar('%');
			break;
		case 'i':
		case 'd':
		case 'x':
			printed += _printf("%s", num_printf(buf, va_arg(args, int), c));
			break;
		case 'b':
		case 'u':
		case 'o':
		case 'X':
			printed += _printf("%s", unsigned_printf(buf, va_arg(args, unsigned int), c));
			break;
		case 'S':
			printed += _printf("%s", only_printed_chars(buf, va_arg(args, char *)));
			break;
		case 'r':
			printed += _printf("%s", rev_str(buf, va_arg(args, char*)));
			break;
		case 'R':
			printed += _printf("%s", rot13(buf, va_arg(args, char*)));
			break;
		default:
			printed += _putchar('%');
			printed += _putchar(c);
			break;
	}
	free(buf);
	return (printed);
}

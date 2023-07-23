#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - prints any passed strings
 * prints variables included in the passed string using conversions
 * @format: the passed string
 *
 * Return: the number of bytes printed (success)
 * Or -1 if failed to print
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		printed += write(1, &format[i], 1);
		i++;
	}
	return printed;
}

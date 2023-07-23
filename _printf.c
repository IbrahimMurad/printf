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
	char temp_c;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					temp_c = va_arg(args, int);
					printed += write(1, &temp_c, 1);
					break;
				case '%':
					temp_c = '%';
					printed += write(1, &temp_c, 1);
					break;
				default:
					return (-1); 
			}
		}
		else
		{
			printed += write(1, &format[i], 1);
		}
		i++;
	}
	return printed;
}

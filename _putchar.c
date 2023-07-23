#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the passed char
 * @c: the character to print
 *
 * Return: the number of printed bytes (success)
 * or -1 if failed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

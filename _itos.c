#include <stdlib.h>

/**
 * _itos - prints an integer to a buffer string
 * @n: the integer
 *
 * Return: a pointer to the buffer
 */

char *_itos(int n)
{
	unsigned int num = n;
	char c[] = "0123456789ABCDEF";
	char *buf = malloc(3);

	buf[0] = c[num / 16];
	num = num % 16;
	buf[1] = c[num];
	buf[2] = '\0';
	return (buf);
}

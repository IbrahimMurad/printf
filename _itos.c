#include <stdlib.h>

/**
 * _itos - prints an integer to a buffer string
 * @n: the integer
 *
 * Return: a pointer to the buffer
 */

char *_itos(int n)
{
	int num = n;
	char *buf = malloc(4);

	if (n / 100)
	{
		buf[0] = n / 100 + '0';
		num = n % 100;
		buf[1] = num / 10 + '0';
		num %= 10;
		buf[2] = num + '0';
		buf[3] = '\0';
	}
	else if (n / 10)
	{
		buf[0] = n / 10 + '0';
		num = n % 10;
		buf[1] = num + '0';
		buf[2] = '\0';
	}
	else
	{
		buf[0] = n + '0';
		buf[1] = '\0';
	}
	return (buf);
}

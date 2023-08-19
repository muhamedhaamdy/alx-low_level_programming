#include "main.h"

/**
 * print_last_digit - it specifiy whether this char is letter or not
 *
 * @n : is the char that we shall determine
 *
 * Return: always return  0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n % 10 + '0');
	return (n % 10);
}

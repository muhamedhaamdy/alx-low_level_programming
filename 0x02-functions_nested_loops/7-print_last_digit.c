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
	int i = n % 10;

	if (n < 0)
		i = -1 * i;
	_putchar(i + '0');
	return (i % 10);
}

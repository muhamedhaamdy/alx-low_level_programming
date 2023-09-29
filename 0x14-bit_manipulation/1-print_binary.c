#include "main.h"

/**
 * print_binary - print the binary representation of a number
 *
 * @n: the number
*/
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, i, bit, first = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i++)
	{
		bit = (n >> i) & 1;
		if (first == 0 && bit)
		{
			_putchar(bit + '0');
			first = 1;
		}
		else if (first)
			_putchar(bit + '0');
	}
}

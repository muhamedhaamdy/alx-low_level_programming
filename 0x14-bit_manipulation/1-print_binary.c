#include "main.h"

/**
 * print_binary - print the binary representation of a number
 *
 * @n: the number
*/
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, i, bit;

	for (i = size - 1; i >= 0; i++)
	{
		bit = (n >> i) & 1;
			_putchar(bit + '0');
	}
}

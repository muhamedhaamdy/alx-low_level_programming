#include "main.h"

/**
 * get_bit - get a bin at specific index
 *
 * @index: the index
 * Return: the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int size = sizeof(n) * 8, i, bit, first = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (!first && bit)
		{
			if (index == i)
				return (bit);
			first = 1;
		}
		else if (first && index == i)
			return (bit);
		else if (!first && index == i)
			return (-1);
	}
}

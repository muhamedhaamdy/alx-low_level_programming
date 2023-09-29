#include "main.h"

/**
 * get_bit - get a bit at specific index
 *
 * @n : the number
 * @index: the index
 * Return: the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8, i, bit, first = 0;
	int tmp = i = size - 1;

	for (; tmp >= 0; tmp--, i--)
	{
		bit = (n >> i) & 1;
		if (index == i)
			return (bit);
	}
	return (-1);
}

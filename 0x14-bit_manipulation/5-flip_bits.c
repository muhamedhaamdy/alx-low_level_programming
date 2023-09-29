#include "main.h"

/**
 * flip_bits - get number of bits you would need to flip
 *  to get from one number to another.i
 * @n : the first number
 * @m : the second number
 * Return: number of bits that been flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(n) * 8, bit1, bit2;
	int tmp = size - 1, c = 0;

	for (; tmp >= 0; tmp--)
	{
		bit1 = (n >> tmp) & 1;
		bit2 = (m >> tmp) & 1;
		if (bit1 ^ bit2)
			c++;
	}
	return (c);
}

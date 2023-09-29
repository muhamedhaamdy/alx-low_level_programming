#include "main.h"

/**
 * _pow - calculate the pow of a to b
 *
 * @b : the power
 * Return: the number after calculaton
*/

unsigned long int _pow(unsigned long int b)
{
	unsigned long int a = 1;

	while (b--)
		a *= 2;
	return (a);
}
/**
 * clear_bit - set a bit to 0  at specific index
 *
 * @n : the address of the number
 * @index: the index
 * Return: the bit
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8, i, bit;
	int tmp = i = size - 1;

	if (index >= size)
		return (-1);

	for (; tmp >= 0; tmp--, i--)
	{
		bit = (*n >> i) & 1;
		if (index == i && bit)
			*n -= _pow(index);
	}
	return (1);
}

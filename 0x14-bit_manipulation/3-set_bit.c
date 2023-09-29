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
 * set_bit - set a bit to 1  at specific index
 *
 * @n : the address of the number
 * @index: the index
 * Return: the bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	*n += _pow(index);
	return (1);
}

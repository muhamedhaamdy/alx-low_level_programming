#include "main.h"

unsigned long int _pow(unsigned long int a, unsigned long int b)
{
	while (b--)
		a *= a;
	return (a);
}
/**
 * set_bit - set a bit to 1  at specific index
 *
 * @n : the address of the number
 * @index: the index
 * Return: the bit
*/
int set_bit(unsigned long int *n, unsigned int index){
	unsigned int size = sizeof(n) * 8, i, bit, sum = 0;
	int tmp = i = size - 1, var = -1;

	for (; tmp >= 0; tmp--, i--)
	{
		bit = (n >> i) & 1;
		if (bit || index == i)
		{
			if (index == i)
				var = 1;
			sum += _pow(2, i);
		}
	}
	return (var);
}

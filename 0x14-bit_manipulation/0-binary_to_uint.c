#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned integer
 *
 * @b : the binary number in string form
 * Return: number after conversion
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0, tmp = 1;

	if (!b)
		return (0);
	while (b  & b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else 
			return (0);
	}
	for (; i >= 0; i--)
	{
		if (b[i] - '0')
			num += tmp;
		tmp *= 2;
	}
	return (num);
}	

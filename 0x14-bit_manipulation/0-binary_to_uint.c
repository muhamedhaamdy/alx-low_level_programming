#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned integer
 *
 * @b : the binary number in string form
 * Return: number after conversion
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, tmp = 1;
	int i = 0;

	if (!b)
		return (num);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (num);
	}
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] - '0')
			num += tmp;
		tmp *= 2;
	}
	return (num);
}

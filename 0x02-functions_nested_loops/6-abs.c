#include "main.h"

/**
 * _abs - it specifiy whether this char is letter or not
 *
 * @n : is the char that we shall determine
 *
 * Return: always return  0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 *  n);
}

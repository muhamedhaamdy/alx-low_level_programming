#include "main.h"

/**
 * _islower - it specifiy whether this cahr is lowercase or upperdase
 *
 * @c : is the char that we shall determine
 *
 * Return: always return  0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

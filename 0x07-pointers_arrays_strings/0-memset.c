#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 *
 * @s : string
 * @b : number that be reblacesd
 * @n : the size
 *
 * Return: string after reblace
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

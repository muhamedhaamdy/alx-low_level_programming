#include "main.h"

/**
 * _memcpy - that copy memory with a constant byte.
 *
 * @dest : firs string
 * @src : seocond string
 * @n : the size
 *
 * Return: string after reblace
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

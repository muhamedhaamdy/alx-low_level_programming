#include "main.h"
#include <stdlib.h>
/**
 * malloc_cheched - allocates memory using malloc
 *
 * @b : the size of this memory
 * Return: a pinter to this array(memory)
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}

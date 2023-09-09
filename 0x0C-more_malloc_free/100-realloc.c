#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  function that reallocates a memory block 
 *
 * @ptr : the bolck u shall reserve
 * @old_size : the old size
 * @new_size : the new size
 * Return: its void dude
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(newsize);
	if (!p)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		p[i] = ptr[i];
	free(ptr);
}	

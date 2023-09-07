#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array,
 *
 * @nmemb : the size of this memory
 * @size : the size of bits
 * Return: address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	 void *arr;

	arr = (void *)calloc(size, nmemb);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

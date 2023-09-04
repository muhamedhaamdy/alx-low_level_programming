#include "main.h"

/**
 * creat_array - creats an array of specific char
 *
 * @size : the size of the array
 * @c : the specific char
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	int i;

	for(i = 0; i < size; i++)
		arr[i] = c;
	return (arr);	
}

#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string
 *
 * @str : the stirng
 * Return: the string
 */
int **alloc_grid(int width, int height)
{
	int **arr , i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) calloc(sizeof(int), height);
	if (arr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		arr[i] = (int*) calloc(sizeof(int), width);
		if (arr[i] == NULL)
			return (NULL);
	}
	return (arr);
}

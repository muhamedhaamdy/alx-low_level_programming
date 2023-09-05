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
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) calloc(sizeof(int), height * width);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

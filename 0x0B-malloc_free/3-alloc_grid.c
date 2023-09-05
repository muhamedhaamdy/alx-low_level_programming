#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - makes 2D array
 *
 * @width : the width of the array
 * @height : the height of the array
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = calloc(sizeof(int), width);
	if (arr == NULL)
		return (NULL);
	for (; i < width;  i++)
	{
		arr[i] =  calloc(sizeof(int), height);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width;  i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

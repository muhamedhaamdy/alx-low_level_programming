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
	arr = (int **) malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min : the minmum number
 * @max : the maxmum number
 * Return: the array
 */
int *array_range(int min, int max)
{
	 int *arr, i;

	if (min > max)
		return (NULL);
	if (min == max)
	{
		arr = (int *)malloc(sizeof(int));
		arr[0] = min;
		return (arr);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}

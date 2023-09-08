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
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++, min++)
		arr[i] = min;
	return (arr);
}

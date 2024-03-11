#include "search_algos.h"

/**
 * linear_search - perform linear search algorithm
 *
 * @array : pointer to the first element
 * @size : number of elements in array
 * @value : the value to search for
 * Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

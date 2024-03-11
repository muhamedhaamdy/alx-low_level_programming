#include "search_algos.h"

/**
 * print_array - print the array
 *
 * @array : pointer to the first element
 * @l : left index
 * @r : right index
 * Return: void
*/

void print_array(int *array, size_t l, size_t r)
{
    size_t i;

    printf("Searching in array: ");
    for (i = l; i <= r; i++)
    {
        printf("%d", array[i]);
        if (i != r)
            printf(", ");
    }
    printf("\n");
	
}

/**
 * binary_search - perform linear search algorithm
 *
 * @array : pointer to the first element
 * @size : number of elements in array
 * @value : the value to search for
 * Return: the first index where value is located
*/


int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;

	if (!array)
		return (-1);
	while (l <= r)
	{
		mid = (l + r) / 2;
		print_array(array, l , r);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

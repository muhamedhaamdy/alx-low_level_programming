#include "function_pointers.h"
/**
 * int_index - saerches for and integer
 * @array : array for int
 * @size : the size of the array
 * @cmp : the function that compare the integer
 * Return: the index of first appearance
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, indx = -1;

	if (!array || !cmp)
		return (indx);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (indx);
}

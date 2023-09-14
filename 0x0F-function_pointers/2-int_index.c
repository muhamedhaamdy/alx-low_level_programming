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
	int i = 0, indx = 0;

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		if (i == size - 1 && !cmp(array[i]))
			return (-1);
		if (cmp(array[i]))
		{
			indx = i;
			break;
		}
	}
	return (indx);
}

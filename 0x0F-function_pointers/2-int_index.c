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
	if (!array || !cmp)
		return;
	int i = 0, indx;

	for (; i < size; i++)
	{
		if (cmp[arr[i]])
		{
			indx = i;
			break;
		}
	}
	return (indx);
}

#include "function_pointers.h"
/**
 * array_iterator - prints element in an indirect way
 * @array : array for int
 * @size : the size of the array
 * @action : the function that prints the number
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action)
		return;
	for (; i < size; i++)
	{
		action(array[i]);
	}
}

#include "main.h"
/**
 * reverse_array - function that prints the array in reverse way
 *
 * @a : the array
 * @n : the size of the array
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i++)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(", ");
	}
}

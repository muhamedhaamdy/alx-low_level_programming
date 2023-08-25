#include "main.h"i
/**
 * reverse_array - function that prints the array in reverse way
 *
 * @a : the array
 * @n : the size of the array
*/
void reverse_array(int *a, int n)
{
	int l = 0, r = n - 1;

	while (l < r)
	{
		int tmp = a[l];

		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
}

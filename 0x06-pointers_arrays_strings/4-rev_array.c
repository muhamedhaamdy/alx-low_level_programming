#include "main.h"i
/**
 * cout- recursive function that prins the full number
 * @n : strarting point
 */
void cout(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		cout(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * reverse_array - function that prints the array in reverse way
 *
 * @a : the array
 * @n : the size of the array
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		cout(a[i]);
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	printf("\n");
}

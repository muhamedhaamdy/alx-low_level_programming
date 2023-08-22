#include "main.h"

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
 * print_array - print array elements
 *
 * @a : array pointer
 * @n : array size
 */
void print_array(int *a, int n)
{
	int* i;

	for (i = a; i < a + n; i++)
	{
		cout(*i);
		if (i == a + n - 1)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}

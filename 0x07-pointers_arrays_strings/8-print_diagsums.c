#include "main.h"
/**
 * cout - prints full number
 * @n : the number
*/
void cout(long n)
{
	long num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
		cout(num / 10);
	_putchar(num % 10 + '0');
}
/**
 *  print_diagsums-prints the sum of the two diagonals
 * @a :chess board
 * @size : the size of the square matrix
*/
void print_diagsums(int *a, int size)
{
	long i = 0, j = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i][i];
		i++;
	}
	while (i >= 0)
	{
		sum2 += a[i][j];
		i--;
		j++;
	}
	cout(sum1);
	_putchar(',');
	_putchar(' ');
	cout(sum2);
}

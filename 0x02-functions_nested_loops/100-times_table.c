#include "main.h"

/**
 * print_times_table - pirnt time table of 9
 *
 * @n: the maximum value for the multiplication table
*/
void print_times_table(int n)
{
	int i = 0, j;

	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			int mul = i * j;

			if (mul  < 10)
				_putchar(i * j + '0');
			else
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			if (j == n)
				_putchar('\n');
			else
			{
				_putchar(',');
				if ((j + 1) * i >= 100)
					_putchar(' ');
				else if ((j + 1) * i >= 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		i++;
	}
}

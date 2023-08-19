#include "main.h"

/**
 * times_table - pirnt time table of 9
 *
 * Return: always return  0
*/
void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			int mul = i * j;

			if (mul  < 10)
				_putchar(i * j + '0');
			else
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				if ((j + 1) * i < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		i++;
	}

}

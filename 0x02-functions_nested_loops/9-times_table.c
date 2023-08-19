#include "main.h"

/**
 * times_table - pirnt time table of 9 
 *
 * Return: always return  0
*/
void times_table(void)
{
	int i = 0, j;
	while (i <=9)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i*j + '0');
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		i++;
	}

}

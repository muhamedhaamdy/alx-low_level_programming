#include "main.h"

/**
 * print_to_98- print from n to 98
 *
 * @n : strarting point
 *
 * Return: always return  0
 */
void print_to_98(int n)
{
	do {
		int tmp = n;

		while (tmp)
		{
			_putchar(tmp % 10 + '0');
			tmp /= 10;
		}
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	} while (n != 98);
}

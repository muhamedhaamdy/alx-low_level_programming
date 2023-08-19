#include "main.h"

/**
 * print_to_98- print from n to 98
 *
 * print - all of this is shit
 *
 * @n : strarting point
 *
 * Return: always return  0
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
void print_to_98(int n)
{
	do {
		pirnt(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else if (n <  98)
			n++;
		else
			break;
	} while (n != 98);
}

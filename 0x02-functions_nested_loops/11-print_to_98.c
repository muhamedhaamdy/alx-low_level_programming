#include "main.h"

/**
 * print_to_98- print from n to 98
 * print - all of this is shit
 *
 * print Description : print the number
 *
 * @n : strarting point
 * @k : pass to print function
 *
 * Return: always return  0
 */
void print(int k)
{
	if (k < 0)
	{
		_putchar('-');
		k *= -1;
	}
	if (k / 10)
		print(k / 10);
	_putchar(k % 10 + '0');
}
void print_to_98(int n)
{
	do {
		print(n);
		if (n > 98)
			n--;
		else if (n <  98)
			n++;
		else
			break;
		_putchar(',');
		_putchar(' ');
	} while (n != 98);
}

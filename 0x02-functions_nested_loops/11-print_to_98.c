#include "main.h"

/**
 * print_to_98- print from n to 98
 * print - recursive function that prins the full number
 *
 * Description : print the number
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
	while (n != 98)
	{
		print(n);
		if (n > 98)
			n--;
		else if (n <  98)
			n++;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

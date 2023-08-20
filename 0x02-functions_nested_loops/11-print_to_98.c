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
		print(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: starting point
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		cout(n);
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

#include "main.h"

/**
 * print_rev - function prints the full stirng
 *
 * @s : the string
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar('\n');
}

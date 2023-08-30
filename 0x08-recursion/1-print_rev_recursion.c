#include "main.h"
/**
 * _print_rev_recursion - print a string in recusive way
 *
 * @s : the string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	if (i == 0)
		return;
	_print_rev_recursion(s + i + 1);
}

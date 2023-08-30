#include "main.h"
/**
 * _print_rev_recursion - print a string in recusive way
 *
 * @s : the string
 */
void _print_rev_recursion(char *s)
{
	int i = len(s) - 1;

	_putchar(s[i]);
	if (i == 0)
		return;
	i--;
	_print_rev_recursion(s + i);
}

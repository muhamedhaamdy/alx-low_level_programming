#include "main.h"
/**
 * _print_rev_recursion - print a string in recusive way
 *
 * @s : the string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (i == 0)
		return;
	_putchar(_print_rev_recursion(s + i + 1));
}
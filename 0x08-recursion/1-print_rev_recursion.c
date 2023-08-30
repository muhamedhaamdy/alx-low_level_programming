#include "main.h"
/**
 * len - get the length of the string
 *
 * @s : the string
 * Return : the length of the string
*/
int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
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

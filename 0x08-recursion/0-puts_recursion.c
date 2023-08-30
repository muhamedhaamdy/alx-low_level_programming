#include "main.h"

/**
 * _puts_recursion - print a string in recusive way
 *
 * @s : the string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}

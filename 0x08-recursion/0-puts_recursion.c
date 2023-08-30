#include "main.h"

/**
 * _puts_recursion - print a string in recusive way
 *
 * @s - the string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	_puts_recusion(s + i + 1);
}

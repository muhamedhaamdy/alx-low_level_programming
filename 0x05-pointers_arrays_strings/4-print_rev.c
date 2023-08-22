#include "main.h"

/**
 * _puts - function prints the full stirng
 *
 * @str : the string
 */
void _puts(char *str)
{
	char i = *str;
	int c = 0, len = _strlen(str);

	while (len--)
		_putchar(*(str + len));
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - function prints the full stirng
 *
 * @str : the string
 */
void _puts(char *str)
{
	char i = *str;
	int c = 0;

	while (i != '\0')
	{
		c++;
		_putchar(i);
		i = *(str + c);
	}
	_putchar('\n');
}

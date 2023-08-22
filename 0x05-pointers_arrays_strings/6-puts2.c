#include "main.h"

/**
 * puts2 - function prints the full stirng
 *
 * @str : the string
 */
void puts2(char *str)
{
	char i = *str;
	int c = 0;

	while (i != '\0')
	{
		c += 2;
		_putchar(i);
		i = *(str + c);
	}
	_putchar('\n');
}

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
		if (c % 2 == 0)
			_putchar(i);
		c++;
		i = *(str + c);
	}
	_putchar('\n');
}

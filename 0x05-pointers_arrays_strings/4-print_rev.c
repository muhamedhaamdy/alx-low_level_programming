#include "main.h"
/**
 * _strlen - function calculate the lengnth of string
 *
 * @s : the string
 *
 * Return: always return the lentgth of the string
 */
int _strlen(char *s)
{
	char i = *s;
	int c = 0;

	while (i != '\0')
	{
		c++;
		i = *(s + c);
	}
	return (c);
}
/**
 * print_rev - function prints the full stirng
 *
 * @s : the string
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar('\n');
}

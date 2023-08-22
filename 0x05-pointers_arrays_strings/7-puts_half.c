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
 * puts_half - function prints the half of the string
 *
 * @str : the string
 */
void puts_half(char *str)
{
	int len = _strlen(str), half;
	half = len / 2;

	while (*(str + half) != '\0')
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}

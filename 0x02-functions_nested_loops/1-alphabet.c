#include "main.h"

/**
 * print_alphabet - function that prints all alphabets in lowercase
 *
 * Return: always return  0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

#include<main.h>

/**
 * main - main function
 *
 * description : this program prints putchar
 *
 * Return: always return  0
 */
int main(void)
{
	char str[8] = "_putcahr";

	for (int i = 0; i < 8; i++)
		_putchar(str[i]);
	_putcahr('\n');
	return (0);
}

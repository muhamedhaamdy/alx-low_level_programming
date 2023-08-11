#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : alphabet
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int a = '1';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

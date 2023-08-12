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
	for (int i = 0; i < 100; i++)
	{
		int a = i % 10, b = i / 10;

		if (b >= a)
			continue;
		putchar(b + '0');
		putchar(a + '0');
		if (i == 89)
			break;
		putchar(',');
		putchar(' ');
	}
	return (0);
}

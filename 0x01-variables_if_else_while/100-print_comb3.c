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
	int i = 0;

	while (i < 100)
	{
		int a = i % 10, b = i / 10;

		if (b >= a)
		{
			i++;
			continue;
		}
		putchar(b + '0');
		putchar(a + '0');
		if (i == 89)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}

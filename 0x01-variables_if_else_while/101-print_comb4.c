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

	while (i < 1000)
	{
		int a = i % 10, b = (i % 100 - a) / 10, c = i / 100;

		if (c < b && c < a && b < a)
		{
			putchar(c + '0');
			putchar(b + '0');
			putchar(a + '0');
			if (i == 789)
				break;
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

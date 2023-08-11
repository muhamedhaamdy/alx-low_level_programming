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
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

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
	int i = '0';

	for (; i < '9'; i++)
	{
		for (int j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				goto finish;
			putchar(',');
			putchar(' ');
		}
	}
finish:
	return (0);
}

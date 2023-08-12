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
	int hamdy = '0';
	while (hamdy<= '9')
	{
		putchar(hamdy);
		if(hamdy == '9')
		{
			putchar('$');
			hamdy++;
			break;
		}
		putchar(',');
		putchar(' ');
		hamdy++;
	}
	putchar('\n');
	return (0);
}

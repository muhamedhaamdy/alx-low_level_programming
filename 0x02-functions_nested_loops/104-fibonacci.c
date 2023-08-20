#include<stdio.h>
/**
*main - print first 50 fib number
*Return: return 0
*/
int main(void)
{
	unsigned long i, a = 1, b = 2, tmp;

	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 98; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (i == 97)
		{
			printf("%lu", b);
			break;
		}
		printf("%lu, ", b);
	}
	putchar('\n');
	return (0);
}

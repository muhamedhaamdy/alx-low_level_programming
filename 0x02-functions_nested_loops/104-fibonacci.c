#include<stdio.h>
/**
*main - print first 50 fib number
*Return: return 0
*/
int main(void)
{
	unsigned long long i, a = 1, b = 2, tmp;

	printf("%llu, %llu, ", a, b);
	for (i = 0; i < 98; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (i == 97)
		{
			printf("%llu", b);
			break;
		}
		printf("%llu, ", b);
	}
	putchar('\n');
	return (0);
}

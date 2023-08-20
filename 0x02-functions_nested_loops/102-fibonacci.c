#include<stdio.h>
/**
*main - print first 50 fib number
*Return: return 0
*/
int main(void)
{
	long long i, a = 1, b = 2, tmp;

	printf("%lld, %lld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (i == 47)
			printf("%lld", b);
		printf("%lld, ", b);
	}
	putchar('\n');
	return (0);
}

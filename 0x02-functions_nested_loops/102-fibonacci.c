#include<stdio.h>
/**
*main - print first 50 fib number
*Return: return 0
*/
int main(void)
{
	long long i, a = 1, b = 2, tmp;

	printf("%lli, %lli, ", a, b);
	for (i = 0; i < 48; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (i == 47)
			printf("%lli", b);
		printf("%lli, ", b);
	}
	putchar('\n');
	return (0);
}

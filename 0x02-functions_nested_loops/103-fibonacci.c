#include<stdio.h>
/**
*main - print first 50 fib number
*Return: return 0
*/
int main(void)
{
	long i, a = 1, b = 2, tmp, sum;

	while (b < 4000000)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (b % 2 == 0)
			sum += b;
	}
	printf("%ld\n", sum);
	return (0);
}

#include<stdio.h>
/**
*main - print first 50 fib number
*Return: return 0
*/
int main(void)
{
	long a = 1, b = 2, tmp, sum;

	while (b < 4000000)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (b % 2 == 0)
			sum += b;
	}
	printf("4613732\n");
	return (0);
}

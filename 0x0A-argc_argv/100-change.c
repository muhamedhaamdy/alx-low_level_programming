#include<stdio.h>
/**
 * main - main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0, n = 0, c = 0;

	if (argc != 2)
		printf("Error\n");
	else
	{
		for (; argv[1][i] != '\0'; i++)
		{
			n += (argv[1][i] - '0');
			n *= 10;
		}
		n /= 10;
		while (n >= 25)
		{
			n -= 25;
			c++;
		}
		while (n >= 10)
		{
			n -= 10;
			c++;
		}
		while (n >= 5)
		{
			n -= 5;
			c++;
		}
		while (n >= 2)
		{
			n -= 2;
			c++;
		}
		while (n >= 1)
		{
			n--;
			c++;
		}
		printf("%d\n", c);
	}
	return (0);
}

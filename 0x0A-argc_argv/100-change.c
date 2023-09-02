#include<stdio.h>
#include<stdlib.h>
/**
 * main - main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]), c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (; n >= 25; n -= 25)
			c++;
		for (; n >= 10; n -= 10)
			c++;
		for (; n >= 5; n -= 5)
			c++;
		for (; n >= 2; n -= 2)
			c++;
		for (; n >= 1; n--)
			c++;
		printf("%d\n", c);
	}
	return (0);
}

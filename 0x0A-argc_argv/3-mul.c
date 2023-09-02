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
	int i = 0, n1 = 0, n2 = 0, negative = 0;

	if (argc != 3)
		printf("ERROR");
	else
	{
		if (argv[1][0] == '-')
		{
			i = 1;
			negative = 1;
		}
		while (argv[1][i] != '\0')
		{
			n1 += argv[1][i] - '0';
			n1 *= 10;
			i++;
		}
		if (negative)
		{
			n1 *= -1;
			negative = 0;
		}
		n1 /= 10;
		i = 0;
		if (argv[2][0] == '-')
		{
			negative = 1;
			i = 1;
		}
		while (argv[2][i] != '\0')
		{
			n2 += argv[2][i] - '0';
			n2 *= 10;
			i++;
		}
		n2 /= 10;
		if (negative)
			n2 *= -1;
	}
	printf("%d\n", n1 * n2);
	return (0);
}

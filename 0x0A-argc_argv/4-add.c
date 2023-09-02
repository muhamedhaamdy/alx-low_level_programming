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
	int i = 0, j = 0, n1 = 0, sum = 0;

	for(; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			int tmp = argv[i][j] - '0';
			if (tmp >= 0 && tmp <= 9)
			{
				n1 += tmp;
				n1 *= 10;
				j++;
				printf("Error");
				return (0);
			}
			else
			{
				printf("Error");
				return (0);
			}
		n1 /= 10;
		sum += n1;
		j = 0;
		n1 = 0;
		}
	}
	printf("%d\n", sum);
	return (0);
}

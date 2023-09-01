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
	int i = 1, n1 = 0, n2 = 0;

	if(argc != 3)
		printf("ERROR");
	else
	{
		while (argv[1][i] != '\0')
		{
			n1 += argv[1][i] - '0';
			n1 *= 10;
			i++;
		}
		n1 /= 10;
		while (argv[2][i] != '\0')
		{
			n2 += argv[2][i] - '0';
			n2 *= 10;
			i++;
		}
	}
	printf("%d %d %d\n", n1 * n2, n1 , n2);
	return (0);
}

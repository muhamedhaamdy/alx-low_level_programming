#include<stdio.h>
/**
 * main - main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entry funciton
 * @ac : number of arguments
 * @av : array of arguments
 * Return: always 0;
*/
int main(int ac, char *av[])
{
	int a , b, result;
	int (*tmp)(int, int);

	if (ac != 4)
	{		
	       printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	tmp = get_op_func(av[2]);
	result = tmp(a, b);
	printf("%d\n", result);
	return (0);
}

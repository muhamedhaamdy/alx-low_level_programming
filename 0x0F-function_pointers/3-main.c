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
int main(int ac; char *av[])
{
	int a , b, result;

	if (ac != 4)
	{		
	       printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	result = get_op_func(av[2]);
	printf("%d\n", result);
}

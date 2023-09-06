#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac : the size of the array
 * @av : 2D array of strings
 * Return: the array
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *arr;

	arr = malloc(ac);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		if (av[i] == NULL)
			return (NULL);
		while (av[i][j] != '\0')
			j++;
		arr = realloc(arr, j);
		if (arr == NULL)
			return (NULL);
		j = 0;
		while (av[i][j] != '\0')
		{
			arr[k] = av[i][j];
			j++;
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	return (arr);
}

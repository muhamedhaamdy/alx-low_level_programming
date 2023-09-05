#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string
 *
 * @str : the stirng
 * Return: the string
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	unsigned int i = 0;
	char *arr;

	while (str[i] != '\0')
		i++;
	arr = (char *) malloc(i + 1);
	i = 0;
	if (arr == NULL || str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}

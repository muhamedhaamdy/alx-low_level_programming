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
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	char *arr = malloc(i);

	i = 0;
	if (arr == '\0' || str == '\0')
		return ('\0');
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}

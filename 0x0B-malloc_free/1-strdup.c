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
	char *arr = malloc(sizeof(char));
	unsigned int i = 0;

	do {
		if (arr == NULL || str == NULL)
			return ('\0');
		arr[i] = str[i];
		i++;
		arr = (char *)realloc(arr, i);
	} while (str[i] != '\0');
	return (arr);
}

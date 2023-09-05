#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 *
 * @s1 : the first stirng
 * @s2 : the second stirng
 * Return: stirng that contains two strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *arr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	arr = (char *) malloc(i + j + 1);
	i = 0;
	if (arr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			arr[i] = s1[i];
			i++;
		}
	}
	j = 0;
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			arr[i] = s2[j];
			i++;
			j++;
		}
	}
	return (arr);
}

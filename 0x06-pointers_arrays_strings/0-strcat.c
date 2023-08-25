#include "main.h"
/**
 * _strcat - function that concatenate two strings
 *
 * @dest : first string
 * @src : second string
 *
 * Return: return a pointer to the first string after concatenation
*/
char *_strcat(char *dest, char *src)
{
	char *i = dest, *j = src;

	while (*i != '\0')
		i++;
	while (*j != '\0')
	{
		*i = *j;
		i++;
		j++;
	}
	i = '\0';
	return (dest);
}

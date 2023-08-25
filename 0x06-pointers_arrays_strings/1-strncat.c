#include "main.h"
/**
 * _strncat - function that concatenate two strings
 *
 * @dest : first string
 * @src : second string
 * @n : number of bits
 * Return: return a pointer to the first string after concatenation
*/
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest, *j = src;

	while (*i != '\0')
		i++;
	while (*j != '\0' && n--)
	{
		*i = *j;
		i++;
		j++;
	}
	i = '\0';
	return (dest);
}

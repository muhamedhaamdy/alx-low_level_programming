#include "main.h"
/**
 * _strncpy - function that copy two strings
 *
 * @dest : first string
 * @src : second string
 * @n : number of bits
 * Return: return a pointer to the first string after concatenation
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest, *j = src;

	while (*j != '\0' && n--)
	{
		*i = *j;
		i++;
		j++;
	}
	*i = '\0';
	return (dest);
}

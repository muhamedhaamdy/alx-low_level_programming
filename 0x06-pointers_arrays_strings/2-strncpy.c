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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i ; i < n; i++)
		dest[i] = '\0'
	return (dest);
}

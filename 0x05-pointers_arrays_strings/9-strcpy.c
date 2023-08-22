#include "main.h"
/**
 * _strlen - function calculate the lengnth of string
 *
 * @s : the string
 *
 * Return: always return the lentgth of the string
 */
int _strlen(char *s)
{
	char i = *s;
	int c = 0;

	while (i != '\0')
	{
		c++;
		i = *(s + c);
	}
	return (c);
}
/**
 * _strcpy - function that copy the string to another string
 *
 * @dest : first string
 * @src : second string
 *
 * Return: pointer to the firest string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		*(dest + i) = *(src + i);
	dest[i] = '\0';
	return (dest);
}

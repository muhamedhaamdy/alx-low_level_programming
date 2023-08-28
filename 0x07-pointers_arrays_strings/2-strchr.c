#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s : string
 * @c : the char
 * Return: string after reblace
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	char *loc = '\0';

	while (s[i] >= '\0')
	{
		if (*(s + i) == c)
		{
			loc = (s + i);
			break;
		}
		i++;
	}
	return (loc);
}

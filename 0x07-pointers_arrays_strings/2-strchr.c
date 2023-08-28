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
	int i;
	char *loc = '\0';

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			loc = (s + i);
			break;
		}
	}
	return (loc);
}

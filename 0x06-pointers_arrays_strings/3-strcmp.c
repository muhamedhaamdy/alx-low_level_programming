#include "main.h"
/**
 * _strcmp - function that compare two strings
 *
 * @s1 : first string
 * @s2 : second string
 * Return: return which of two strings are bigger
*/
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

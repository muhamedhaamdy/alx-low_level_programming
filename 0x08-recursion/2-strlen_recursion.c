#include<stdio.h>
/**
 * _strlen_recursion - get the length of the string
 * @s : the string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i = _strlen_recursion(s + i + 1);
	return (i + 1);
}

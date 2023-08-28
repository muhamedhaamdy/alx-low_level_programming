#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 *
 * @s :first string
 * @accept :second string
 * Return: number the length of a prefix substring.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0 ; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (s[j] == accept[i])
				c++;
		}
	}
	return (c);
}

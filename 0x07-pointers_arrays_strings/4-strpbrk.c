#include "main.h"

/**
 * _strpbrk -  function  that searches a string for any of a set of bytes.
 *
 * @s :first string
 * @accept :second string
 * Return:pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				char *loc = &s[j];
				return(loc);
			}
		}
	}
	return ('\0');
}

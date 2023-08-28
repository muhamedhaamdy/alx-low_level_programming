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
	char *loc;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				loc = &s[i];
				return (loc);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

#include "main.h"
/**
 * valid- check if its valid or not
 *
 * @i: first int
 * @j: second int
 * @s1: first string
 * @s2: second string
 * Return: 1 or 0
*/
int valid(int i, int j, char *s1, char *s2)
{
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
/**
 * _strstr -  function  that  locates a substring
 * @haystack :first string
 * @needle :second string
 * Return:pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *loc = '\0';

	for (i = 0 ; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			int tmp1 = i, tmp2 = j;

			if (valid(tmp1, tmp2, needle, haystack))
			{
				loc = (needle + i);
				break;
			}
		}
	}
	return (loc);
}

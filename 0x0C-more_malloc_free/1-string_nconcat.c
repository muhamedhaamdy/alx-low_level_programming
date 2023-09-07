#include "main.h"
#include <stdlib.h>
/**
 * min - compare two numbers to get the minimum
 * @a : the firts number
 * @b : the second number
 * Return: the minimum number
*/
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1 : the first string
 * @s2 : the second stirng
 * @n : the number of bits
 * Return: string after concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, sz1 = 0, sz2 = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[sz1] != '\0')
			sz1++;
	}
	if (s2 != NULL)
	{
		while (s2[sz2] != '\0')
			sz2++;
	}
	if (s2 == NULL && s1 == NULL)
	{
		s = malloc(1);
		if (s == NULL)
			return (NULL);
		s[0] = ' ';
		return (s);
	}
	else if (s2 == NULL)
		s = malloc(sz1 + 1);
	else if (s1 == NULL)
		s = malloc(min(sz2, n) + 1);
	else
		s = malloc(sz1 + min(sz2, n) + 1);
	if (s == NULL)
		return (NULL);
	for (; i < sz1; i++)
		s[i] = s1[i];
	for (; j < min(sz2, n); j++, i++)
		s[i] = s2[j];
	s[i] = s2[j];
	return (s);
}

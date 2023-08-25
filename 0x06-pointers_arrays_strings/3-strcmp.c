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
	int sum1 = 0, sum2 = 0, i = 0;

	for ( ; s1[i] != '\0'; i++)
		sum1 += s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		sum2 += s2[i];
	if (sum1 == sum2)
		return (0);
	else if (sum1 > sum2)
		return (sum1 - sum2);
	else
		return (sum1 - sum2);
}

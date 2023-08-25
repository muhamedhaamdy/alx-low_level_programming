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

	while (s1[i] != '\0')
		sum1 += s1[i];
	i = 0'
	while(s2[i] != '\0')
		sum2 += s2[i];
	if(sum1 == sum2)
		return (0);
	else if(sum1 > sum2)
		return (15);
	else
		return (-15);
}

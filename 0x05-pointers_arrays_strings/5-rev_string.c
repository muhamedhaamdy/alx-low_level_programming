#include "main.h"
/**
 * _strlen - function calculate the lengnth of string
 *
 * @s : the string
 *
 * Return: always return the lentgth of the string
 */
int _strlen(char *s)
{
	char i = *s;
	int c = 0;

	while (i != '\0')
	{
		c++;
		i = *(s + c);
	}
	return (c);
}
/**
 * rev_string - function that reverse the string
 *
 * @s : the string
 */
void rev_string(char *s)
{
	int l = 0, r = _strlen(s) - 1;

	while (l < r)
	{
		char tmp = *(s + l);
		*(s + l) = *(s + r);
		*(s + r) = tmp;
		l++;
		r--;
	}
}

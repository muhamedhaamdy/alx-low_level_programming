#include "main.h"
/**
 * not_alpha - determine if it is alphabit or not
 * @ch : the character
 * Return: 1 or 0
*/
int not_alpha(char *ch)
{
	int s[] = {',', ';', '.', '!','?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
	int i;

	for (i = 0; s[i] <= 12; i++)
	{
		if (*ch == s[i])
			return (1);
	}
		return (0);
}
/**
 * cap_string - function that turns all lowercase chars to uppercase
 * @ch : string
 * Return: return string after editing.
*/
char *cap_string(char *ch)
{
	int i = 1;

	for (; ch[i] != '\0'; i++)
	{
		if (not_alpha(ch[i - 1])  && (ch[i] >= 'a' && ch[i] <= 'z'))
			ch[i] -= 32;
	}
	return (ch);
}

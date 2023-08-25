#include "main.h"
/**
 * is_alpha - determine if it is alphabit or not
 * @ch : the character
 * Return: 1 or 0
*/
int is_alpha(char ch)
{
	if (ch == ',' || ch == ';' || ch == '.' || ch == '!' || ch == '?' || ch == '"' || '(' || ch == ')' || ch == '{' || ch == '}' || ch == ' ' || ch == '\n' || ch == '\t')
		return (0);
	else
		return (1);
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
		if (!is_alpha(ch[i - 1])  && (ch[i] >= 'a' && ch[i] <= 'z'))
			ch[i] -= 32;
	}
	return (ch);
}

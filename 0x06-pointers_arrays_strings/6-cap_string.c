#include "main.h"
/**
 * isalpha - determine if it is alphabit or not
 * @ch : the character
 * Return: 1 or 0
*/
bool isalpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
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
		if (!isalpha(ch[-1])  && (ch[i] >= 'a' && ch[i] <= 'z'))
			ch[i] -= 32;
	}
	return (ch);
}

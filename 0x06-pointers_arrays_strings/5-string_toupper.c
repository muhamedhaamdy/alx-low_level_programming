#include "main.h"
/**
 * string_toupper - function that turns all lowercase chars to uppercase
 * @ch : string
 * return: return string after editing
*/
char *string_toupper(char *ch)
{
	int i = 0;

	for (; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 32;
	}
	return (ch);
}

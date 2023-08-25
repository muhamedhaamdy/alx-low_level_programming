#include "main.h"

/**
 * swap_int - function that swap two numbers
 *
 * @a : first number
 * @b : second number
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest, *j = src;

	while (*i != '\0')
	       i++;
	while (*j != '\0')
	{
		*i = *j;
		i++;
		j++;
	}	
	return dest;
}	

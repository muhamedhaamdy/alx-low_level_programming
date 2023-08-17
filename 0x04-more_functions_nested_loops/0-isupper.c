#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Description: function  using builtin bunction isupper
 *
 * Return: Always 0.
 */
int _isupper(char ch)
{
	if (isupper(ch))
		return (1);
	else
		return (0);
}

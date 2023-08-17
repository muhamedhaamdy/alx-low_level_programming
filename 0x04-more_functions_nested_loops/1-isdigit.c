#include "main.h"

/**
 * main - check the code.
 *
 * Description: function  using builtin bunction isupper
 *
 * Return: Always 0.
 */
int _isupper(char  c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

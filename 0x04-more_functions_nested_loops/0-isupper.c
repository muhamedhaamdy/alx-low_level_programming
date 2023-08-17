#include "main.h"

/**
 * main - check the code.
 *
 * Description: function  using builtin bunction isupper
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

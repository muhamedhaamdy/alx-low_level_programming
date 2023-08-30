#include<stdio.h>
/**
 * _pow_recursion - calculate the power of a number
 * @x : the first number
 * @y : the second number
 * Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (x * _pow_recursion(x, y + 1));
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

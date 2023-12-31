#include<stdio.h>
/**
 * _sqrt_help - this help the fiest funtion
 * @n : the first number
 * @i : the second number
 * Return: the square root if exist
*/
int _sqrt_help(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == n)
		return (-1);
	return (_sqrt_help(n, i + 1));
}
/**
 * _sqrt_recursion - calculate the square root of a number
 * @n : the number
 * Return: the square root if exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 1));
}

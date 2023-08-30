#include<stdio.h>
/**
 * _sqrt_recursion - calculate the square root of a number
 * @n : the number
 * Return: the square root if exist
 */
int _sqrt_recursion(int n)
{
	int tmp = n;

	if (n * n == tmp)
		return (n);
	if (n == 0)
		return (-1);
	return (_sqrt_recursion(n - 1));
}

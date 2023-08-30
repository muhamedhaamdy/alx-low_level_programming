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
/**
 * is_prime_help - help the first function
 * @n : first number
 * @i : second number
 * Return: 1 or 0
*/
int is_prime_help(int n, int i, int r)
{
	if (n == r)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_help(n, i + 1));
}
/**
 * is_prime_number - calculate the power of a number
 * @n: the second number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int r = _sqrt_recursion(n);

	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_help(n, 2, r));
}

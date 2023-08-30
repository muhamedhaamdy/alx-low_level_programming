#include<stdio.h>
/**
 * is_prime_help - help the first function
 * @n : first number
 * @i : second number
 * Return: 1 or 0
*/
int is_prime_help(int n, int i)
{
	if (i == n)
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
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime_help(n, 2));
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a : first number
 * @b : second number
 * Return: the summation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - sub two numbers
* @a : first number
* @b : second number
* Return: subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiply two numbers
* @a : first number
* @b : second number
* Return: multplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divede two numbers
* @a : first number
* @b : second number
* Return: a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
* op_mod - sub two numbers
* @a : first number
* @b : second number
* Return: subtraction
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}

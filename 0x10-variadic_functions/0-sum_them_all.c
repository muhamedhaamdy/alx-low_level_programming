#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all numbers
 *
 * @n : number of integers
 * Return: summation
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}

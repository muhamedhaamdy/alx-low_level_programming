#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints all numbers
 *
 * @separator : the string to be printed between numbers
 * @n : number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ptr, int));
		else
			printf("%d%s", va_arg(ptr, int), separator);
		i++;
	}
	va_end(ptr);
}

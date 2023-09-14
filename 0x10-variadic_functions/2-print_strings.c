#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints all strings
 *
 * @separator : the string to be printed between strings
 * @n : number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i < n)
	{
		str = va_arg(ptr, char *);
		if (!str)
			str = "(nil)";
		if (i == n - 1)
			printf("%s\n", str);
		else if (separator)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
		i++;
	}
	va_end(ptr);
}

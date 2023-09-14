#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_stirngs - prints all strings
 *
 * @separator : the string to be printed between strings
 * @n : number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i < n)
	{
		if (i == n - 1)
			printf("%s\n", va_arg(ptr, char *));
		else if (separator)
			printf("%s%s", va_arg(ptr, char *), separator);
		else
			printf("%s", va_arg(ptr, char *));
		i++;
	}
	va_end(ptr);
}

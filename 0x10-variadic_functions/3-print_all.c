#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all strings
 *
 * @format : a string
*/
void print_all(const char * const format, ...)
{
	int i;
	va_list pt;
	char *s;

	va_start(pt, format);
	while (format[i])
	{
		switch(format[i])
		case 'c':
			printf("%c", va_arg(pt, char);
			break;
		case 'i':
			printf("%d", va_arg(pt, int));
			break;
		case 's':
			s = va_arg(pt, char *);
			printf("%s", s? s : "(nil)"));
			break;
		case 'f':
			printf("%f", va_arg(pt, double));
			break;
		default:
			break;
	}
	printf("\n");
}

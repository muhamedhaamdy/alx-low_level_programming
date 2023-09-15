#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * next_valid - check the next valid char
 *
 * @s : the stirng
 * @i : the index
 * Return: the index of the next valid
*/
int next_valid(char *s, int i)
{
	while (s[i])
	{
		if (s[i] == 'c' || s[i] == 'i' || s[i] == 's' || s[i] == 'f')
			return (1);
		i++;
	}
	return (0);
}
/**
 * print_all - prints all strings
 *
 * @format : a string
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list pt;
	char *s;

	va_start(pt, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pt, int));
				break;
			case 'i':
				printf("%d", va_arg(pt, int));
				break;
			case 's':
				s = va_arg(pt, char *);
				printf("%s", s ? s : "(nil)");
				break;
			case 'f':
				printf("%f", va_arg(pt, double));
				break;
			default:
				break;
		}
		i++;
		if (next_valid(format, i))
			pirntf(", ");
	}
	printf("\n");
}

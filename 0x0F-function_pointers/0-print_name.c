#include "function_pointers.h"
/**
 * print_name - prints a name(string)
 * @name : the name(string)
 * @f : the function that prints the name(string)
 * Return: it's void dude :)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

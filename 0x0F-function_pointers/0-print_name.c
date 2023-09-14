#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name : the name
 * @f : the function that prints the name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

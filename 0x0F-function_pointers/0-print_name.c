#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name(string)
 * @name : the name(string)
 * @f : the function that prints the name(string)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else 
		return;
}

#include "function_pointers.h"
/**
 * print_name - prints the name(stirng)
 * @name : the name(string)
 * @f : the function that prints the name(stirng)
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

#include "function_pointers.h"
/**
 * print_name - prints the name(stirng)
 * @f : the function that prints the name(string)
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

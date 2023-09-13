#ifndef MAIN_H
#define MAIN_H
/**
*main - header file for protoypes
*void protoypes (void)
*int protoypes (int)
*/
#include <stdlib.h>
int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */

#include "dog.h"
/**
 * print_dog - print the dog data
 *
 * @d : the address for the struct
*/
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("(nil)");
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d == NULL)
	{
		printf("Name: %s\nAge: \nOwner: %s\n", d->name, d->owner);
		return;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

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
		printf("");
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

#include "dog.h"
/**
 * init_dog - initialize the struct
 *
 * @d : the address for the struct
 * @name : the name of dog
 * @age : the age of the dog
 * @owner : the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

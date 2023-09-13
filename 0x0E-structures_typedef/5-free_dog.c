#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the dog :)
 * @d : the dog
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - Free memory allocate to d
 *
 * @d: pointer to the variable d
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);

		return;
	}
}

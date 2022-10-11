#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct
 *
 * @d: the pointer to the new variable
 * @name: the pointer to the name
 * @age: the age
 * @owner: the pointer to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

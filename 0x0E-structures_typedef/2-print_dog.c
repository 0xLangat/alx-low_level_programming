#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to the new struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		int check = 0;

		if (d->name == NULL)
			check += 0

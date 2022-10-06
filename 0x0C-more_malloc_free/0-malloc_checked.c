#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: The size of memory required
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);

	if (i == 0)
		exit(98);

	return (i);
}

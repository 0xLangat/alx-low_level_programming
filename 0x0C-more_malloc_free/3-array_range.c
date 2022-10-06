#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: the small integer
 * @max: the large integer
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	i = 0;
	for (j = min; j <= max; j++)
	{
		*(arr + i) = j;
		i++;
	}

	return (arr);
}

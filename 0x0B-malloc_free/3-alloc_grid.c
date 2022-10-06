#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array
 *
 * @width: The width of the array (columns)
 * @height: The height of the array (rows)
 *
 * Return: On success pointer to a 2 dimensional array
 * On failure return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr;


	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

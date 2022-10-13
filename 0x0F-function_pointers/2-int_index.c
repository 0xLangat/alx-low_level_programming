#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to function that is passed
 *
 * Return: On success the index of the first element for wich the
 * function does not return 0
 * On failure 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	result = 0;
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
		{
			return (i);
		}
	}

	return (-1);
}

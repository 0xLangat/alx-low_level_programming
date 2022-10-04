#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initialize it
 * with a specific char
 *
 * @size: This is the length of the array
 * @c: This is the input char
 *
 * Return: An array Initialized with the specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *) malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}

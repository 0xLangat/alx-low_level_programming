#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * specific char
 *
 * @size: size of the array
 * @c: The chars to be initialized with
 *
 * Return: a pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ch + i) = c;
	}

	return (ch);
}

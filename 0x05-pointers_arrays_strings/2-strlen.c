#include "main.h"

/**
 * _strlen - Return length of a string
 *
 * @s: The string to be checked
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

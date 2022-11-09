#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Return: if lower 1
 * On failure 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

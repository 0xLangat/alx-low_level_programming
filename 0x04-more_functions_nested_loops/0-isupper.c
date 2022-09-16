#include "main.h"

/**
 * _isupper - check if character is uppercase
 *
 * @c: the character to be returned
 *
 * Return: on success 1.
 * on failure 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: On success 1
 * On failure 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

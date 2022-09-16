#include "main.h"

/**
 * _isdigit - check is a integer passed is between 0 and 9
 *
 * @c: the integer to be checked
 *
 * Return: On success 1.
 * On failure 0.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

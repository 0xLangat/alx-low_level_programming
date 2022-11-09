#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: The integer to be checked
 *
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}

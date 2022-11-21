#include "main.h"

/**
 * factorial - get the factorial of a number
 *
 * @n: The number to be computed
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

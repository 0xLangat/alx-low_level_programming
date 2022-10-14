#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all the parameters
 *
 * @n: fixed variable to be taken
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}

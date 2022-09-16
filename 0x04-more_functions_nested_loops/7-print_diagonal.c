#include "main.h"

/**
 * print_diagonal - print a diagonal using '/'.
 *
 * @n: The number of times a '/' is printed.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int counter;

		for (counter = 0; counter < n; counter++)
		{
			_putchar('\\');
		}
	}

	_putchar('\n');
}

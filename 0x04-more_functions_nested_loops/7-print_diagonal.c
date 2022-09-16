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
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');

			_putchar('\n');
		}
	}

	_putchar('\n');
}

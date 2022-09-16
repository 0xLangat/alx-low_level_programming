#include "main.h"

/**
 * print_line - print a line
 *
 * @n: the number of times the '_' should be printed
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		_putchar('_');
	}

	_putchar('\n');
}

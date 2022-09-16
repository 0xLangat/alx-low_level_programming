#include "main.h"

/**
 * print_triangle - print a triangle of size "size"
 *
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

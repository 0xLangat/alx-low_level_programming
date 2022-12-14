#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			if (j > 0)
			{
				for (k = 0; k < j; k++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

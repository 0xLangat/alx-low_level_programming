#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: the pointer to the 2d array
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2, index;

	index = 0;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				index = ((size * i) + j);
				sum1 = sum1 + a[index];
			}

			if ((i + j) == (size - 1))
			{
				index = ((size * i) + j);
				sum2 = sum2 + a[index];
			}
		}
	}

	printf("%d, %d\n", sum1, sum2);
}

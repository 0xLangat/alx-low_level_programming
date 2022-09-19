#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of numbers
 *
 * @a: the array itself
 * @n: the number of array elements to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	}

	printf("\n");
}

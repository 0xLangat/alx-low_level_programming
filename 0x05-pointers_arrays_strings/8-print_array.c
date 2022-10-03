#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array, followed by a new line
 *
 * @a: The pointer to the string
 * @n: The number of elements to be printed in the array
 */
void print_array(int *a, int n)
{
	int len, i;

	len = 0;
	while (a[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[n - 1]);
}

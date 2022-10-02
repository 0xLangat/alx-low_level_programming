#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: First address
 * @b: Second address
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

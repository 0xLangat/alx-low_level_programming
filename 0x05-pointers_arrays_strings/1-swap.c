#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}

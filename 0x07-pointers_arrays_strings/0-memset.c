#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: The pointer to the memory address to be filled
 * @b: The char constant to fill the memory with
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

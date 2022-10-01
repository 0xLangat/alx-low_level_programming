#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 *
 * @argc: The arguments counter
 * @argv: The arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%i\n", result);

	return (0);
}

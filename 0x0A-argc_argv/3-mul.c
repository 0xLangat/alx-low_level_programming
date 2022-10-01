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
	if (argc < 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int i, j;

		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", (i * j));
	}

	return (0);
}

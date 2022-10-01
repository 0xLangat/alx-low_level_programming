#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the sum of positive numbers
 *
 * @argc: The arguments counter
 * @argv: The arguments vector
 *
 * Return: On success 0
 * On failure 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, n;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				n = atoi(argv[i]);
				sum += n;
			}
			else
			{
				printf("Error\n");

				return (1);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}

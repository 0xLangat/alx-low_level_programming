#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: The number of arguments
 * @argv: The arguments as an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}

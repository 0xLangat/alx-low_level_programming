#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: The number of arguments passed
 * @argv: The arguments vector
 *
 * Return: On success 0
 * On failure other number
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}

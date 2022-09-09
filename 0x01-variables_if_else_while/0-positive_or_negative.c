#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The entry point
 * Description: Checks is a number is positive or negative
 *
 * Return: 0 is always returned
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}

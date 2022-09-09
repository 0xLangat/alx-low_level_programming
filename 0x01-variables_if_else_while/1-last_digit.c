#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The entry point
 *
 * Description: Print the last digit of the number stored
 * int the code
 *
 * Return: 0 is always returned
 */
int main(void)
{
	int n;
	int last_digit;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = abs(n);

	last_digit = m % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", m, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", m, last_digit);
	else if (last_digit < 6 && last_digit > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		m, last_digit);

	return (0);
}

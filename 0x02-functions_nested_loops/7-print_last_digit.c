#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to be passed
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last, num;

	num = n;
	last = num % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');

	return (last);
}

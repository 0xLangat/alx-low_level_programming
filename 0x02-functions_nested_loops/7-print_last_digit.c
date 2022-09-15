#include "main.h"

/**
 * print_last_digit - print the last digir of the number given
 *
 * @x: the number to be checked for the last number
 *
 * Return: returns the last digit
 */
int print_last_digit(int x)
{
	int number = x;

	int last_digit = number % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

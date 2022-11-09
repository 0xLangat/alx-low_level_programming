#include <unistd.h>

/**
 * _putchar - print the character passed
 *
 * @c: the character to be printed
 *
 * Return: On succes 1.
 * On failure, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

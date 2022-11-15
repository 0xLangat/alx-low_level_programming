#include "main.h"
#include <stddef.h>

/**
 * set_string - sets the value of a pointer to a string
 *
 * @s: double pointer
 * @to: the value to change the pointer to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

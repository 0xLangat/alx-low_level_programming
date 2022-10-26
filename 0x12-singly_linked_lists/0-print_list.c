#include "lists.h"

/**
 * print_list - print all elements of a list
 *
 * @h: The pointer to the list
 *
 * Return: On success the number of nodes
 * On failure (nil)
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;

		count++;
	}

	return (count);
}

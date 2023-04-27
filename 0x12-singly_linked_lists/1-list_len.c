#include "lists.h"

/**
 * list_len - function that return the number of elements
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		h = h->next;
		lenght++;
	}
	return (lenght);
}

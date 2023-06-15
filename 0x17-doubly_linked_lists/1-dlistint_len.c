#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numOfelem = 0;

	while (h != NULL)
	{
		numOfelem++;
		h = h->next;
	}
	return (numOfelem);
}

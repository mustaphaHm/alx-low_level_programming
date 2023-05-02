#include "lists.h"
/**
 * listint_len - function that returns the niumber of linked list
 * @h: pointer to the linked list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t numOfElem = 0;

	while (h)
	{
		numOfElem++;
		h = h->next;
	}
	return (numOfElem);
}

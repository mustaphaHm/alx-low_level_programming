#include "lists.h"
/**
 * print_listint - function that prints all elem f a linked list
 * @h: parameter type of listint struct
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int numOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numOfNodes++;
		h = h->next;
	}
	return (numOfNodes);
}

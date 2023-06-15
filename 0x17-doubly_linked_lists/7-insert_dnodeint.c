#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a node
 * @h: pointer that points to the head of a linked list
 * @idx: position where we should add the node
 * @n: the data of the node
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	if (idx == 0)
	{
		new->next = current;
		new->prev = NULL;
		if (current != NULL)
			current->prev = new;
		*h = new;
		return (new);
	}
	while (current)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			if (current->next != NULL)
				current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}

#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to the head of lk list
 * @index: unsigned integer , the index of wanted element
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (index == i)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}

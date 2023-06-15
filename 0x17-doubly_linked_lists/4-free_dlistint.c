#include "lists.h"
/**
 * free_dlistint - function that frees a lk liste
 * @head: pointer to the head of lk list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}

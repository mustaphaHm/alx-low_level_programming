#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end of LK list
 * @head: pointer to a pointer to the head of the lk list
 * @n: constant integer (data)
 * Return: the adress of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	newNode->prev = lastNode;
	lastNode->next = newNode;

	return (newNode);
}

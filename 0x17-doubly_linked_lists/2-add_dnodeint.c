#include "lists.h"

/**
 * add_dnodeint - functiion that  prints all the elements of a lk l list
 * @head: pointer to the head
 * @n: constant integer (data)
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (*head)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	else
		newNode->next = NULL;
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);
}

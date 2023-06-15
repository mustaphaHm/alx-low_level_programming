#include "lists.h"
/**
 * add_dnodeint - function that adds a node at the begining of LK list
 * @head: pointer to a pointer to the head of the list
 * @n: constant integer
 * Return: the adress of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}

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
		free(newNode);
	}
	if (*head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		newNode->prev = NULL;
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}

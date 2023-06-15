#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all data in a lk list
 * @head: pointer to the head of the lk list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

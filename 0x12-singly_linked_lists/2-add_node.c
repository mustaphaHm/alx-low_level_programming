#include "lists.h"
/**
 * add_node - function that adds a new node to a linked list
 * @head: the first node
 * @str: the node to be added
 * Return: address of the new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!head || !node)
		return (NULL);
	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = LenghtOfStr(node->str);
	}

	node->next = *head;
	*head = node;
	return (node);
}

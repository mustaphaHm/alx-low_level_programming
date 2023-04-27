#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: the first node
 * @str: the node to be added
 * Return: address of the new node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !endnode)
		return (NULL);
	if (str)
	{
		endnode->str = strdup(str);
		if (!endnode->str)
		{
			free(endnode);
			return (NULL);
		}
		endnode->len = LenghtOfStr(endnode->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = endnode;
	}
	else
		*head = endnode;
	return (endnode);
}

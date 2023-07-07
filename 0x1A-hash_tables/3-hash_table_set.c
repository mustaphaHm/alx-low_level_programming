#include "hash_tables.h"
/**
 * hash_table_set - function that adds elem to hashtable
 * @ht: the hashtable
 * @key: the key (string)
 * @value: the value associated with the key
 * Return: 1 if succeded , 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *current_item;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];

	while (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);
			return (1);
		}
		current_item = current_item->next;
	}

	new_item = create_item(key, value);
	if (new_item == NULL)
		return (0);

	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);
}
/**
 * create_item - function that create an item of ht
 * @key: the key
 * @value: the value associated wirh the key
 * Return: the item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
	{
		return (NULL);
	}

	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);

	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->value, value);
	item->next = NULL;
	return (item);
}

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
	hash_node_t item = NULL;
	unsigned long int index = 0;

	/*create the item to be inserted*/
	item = create_item(key, value);
	/* retrieve the index by using the key */
	index = key_index(key, ht->size);
	/* retrive the current item at the founded index*/
	hash_node_t current_item = ht->array[index];
	if (current_item == NULL)
	{
		/*insert the item*/
		ht->array[index] = item;
		return (1);
	}
	else
	{
		/*if the key already exist, we gonna update the value*/
		if (strcmp(current_item->key, key) == 0)
		{
			ht->array[index]->value = value;
			return (1);
		}
		else
		{
			/* handle collision*/
			handle_collision(ht, index, item);
			return (1);
		}
	}

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
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
/**
 * handle-collision - function that hundles collision on a ht
 * @ht: the hashtable
 * @index: the index
 * @item: the item
 */
void handle_collision(hash_table_t *ht, unsigned long int index, hash_node_t item)
{
	/*retrive the current item at the index*/
	hash_nod_t current_item = ht->array[index];
	/*traverse the linkedlist until the end*/
	while (current->item->next != NULL)
	{
		/* check if the key already exist in the linked list*/
		if (strcmp(current_item->key, item->key) == 0)
		{
			/*the key already exist so update the value*/
			strcpy(current->item->value, item->value);
			free(item->key);
			free(item->value);
			free(item);
			return (1);
		}
		current_item = current_item->next;
	}
	/* append the item at the end of the linked list*/
	current_item->next = item;
}

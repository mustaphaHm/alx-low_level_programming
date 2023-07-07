#include "hash_tables.h"

/**
 * hash_table_delete - print hash table.
 * @ht: pointer to hash table to print
 * Return: void and prints hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int size;
	hash_node_t *temp, *second;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				second = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = second;
			}
		}
		else
			free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

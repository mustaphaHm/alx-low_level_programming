#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hashTable
 * @size: size of the array
 * Return: the created hashTable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;
	return (hashTable);
}

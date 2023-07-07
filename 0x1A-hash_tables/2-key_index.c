#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: size of the array
 * Return: index of the key integer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

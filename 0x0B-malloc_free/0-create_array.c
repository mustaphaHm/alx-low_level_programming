#include "main.h"
#include "stdlib.h"
/**
 * create_array - a function that creates an array of char
 * @size: the size of the array
 * @c: a character
 * Return: returns a pointer to the array or 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (0);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}

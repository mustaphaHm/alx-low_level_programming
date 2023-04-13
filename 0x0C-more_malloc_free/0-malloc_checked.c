#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - function that allocate memory using malloc
 * @b: a positive integer parameter
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(*ptr));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

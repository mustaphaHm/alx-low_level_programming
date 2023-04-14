#include "main.h"
#include "stdlib.h"
#include "string.h"
/**
 * _calloc - function that allocates memory fo an array
 * @nmemb: int parameter - number of elements
 * @size: int parameter - size of array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, size * nmemb);
	return (ptr);
}

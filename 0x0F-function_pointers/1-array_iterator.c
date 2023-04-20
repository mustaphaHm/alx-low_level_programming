#include "function_pointers.h"
/**
 * array_iterator - function that executes a f given as param
 * @array: the array
 * @size: size of array
 * @action: pointer to a function called action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

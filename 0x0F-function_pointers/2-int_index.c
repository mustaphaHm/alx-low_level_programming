#include "function_pointers.h"
/**
 * int_index - function that searches an int
 * @array: the array of int
 * @size: the size of the array
 * @cmp: a function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (array[0]);
}

#include "main.h"
#include "stdlib.h"
/**
 * array_range - function that creates an array of integers
 * @min: int , started
 * @max: int , finish
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}

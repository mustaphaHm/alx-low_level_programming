#include "main.h"

/**
 * rev_array - Reverses the content of an array
 * @a: Input type Integer
 * @n: Input type Integer
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int rev = a[0];
	int counter = 0;
	int i;

	while (a[counter] != '\0' && counter < n)
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = a[i];
		a[i] = a[counter];
		a[counter] = rev;
	}
}

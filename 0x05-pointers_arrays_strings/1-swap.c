#include "main.h"
/**
 * swap_int - swap two integers
 *
 * @a: first parametre int
 * @b: second parametre int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x = &a;
	int y = &b;

	*a = y;
	*b = x;
}

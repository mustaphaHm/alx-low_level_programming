#include "main.h"
/**
 * function_islower(int c) - function that return 1 or 0
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

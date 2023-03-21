#include "main.h"
/**
 * _islower - function that return 1 or 0
 * @c: c is an integer parameter
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

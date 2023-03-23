#include "main.h"
/**
 * _isupper - function that return 1 or 0
 * @c: c is an integer parameter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

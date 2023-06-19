#include "main.h"
/**
 * _isdigit - function that return 1 or 0
 * @c: c is an integer parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

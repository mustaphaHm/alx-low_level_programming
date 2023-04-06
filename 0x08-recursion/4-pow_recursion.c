#include "main.h"
/**
 *_pow_recursion - function that returns value of x raised to power of y
 *@x: first intger parameter
 *@y: second integer parameter
 *Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}

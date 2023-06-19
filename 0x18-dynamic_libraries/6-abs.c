#include "main.h"
/**
 * _abs - function that return the absolute value of a number
 * @n: parametre of the function
 * Return: integer
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

#include "main.h"
/**
 *int factorial -function that returns the factorial of a given number
 *@n: integer parametr
 *Return: integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
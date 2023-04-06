#include "main.h"

int calc_sqrt_rec(int n, int i);
/**
 * _sqrt_recursion - function that return the natural square of a number
 * @n: int parameter
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calc_sqrt_rec(n, 0));
}
/**
 * calc_sqrt_rec - function that help to find the root square
 * @n: int parameter
 * @i: seconde int parameter
 * Return: int
 */
int calc_sqrt_rec(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calc_sqrt_rec(n, i + 1));
}

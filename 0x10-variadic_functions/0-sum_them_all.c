#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - function that return sum of all params
 * @n: count of function parametrs
 * ...: unknown number of parameters
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}

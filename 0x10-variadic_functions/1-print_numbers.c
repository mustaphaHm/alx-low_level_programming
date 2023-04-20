#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_numbers - function that prints numbers
 * @separator: pointer
 * @n: number of paras passed to the func
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	if (n == 0)
		exit (-1);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int)); 
		printf("%s",separator);
	}
	va_end(list);
	printf("\n");
}
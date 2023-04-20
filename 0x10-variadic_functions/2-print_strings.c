#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_strings - func that prints strings
 * @separator: string param as separator
 * @n: num of params passed to func
 * ...: params
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *stringToprint = va_arg(list, char*);

		printf("%s", stringToprint != NULL ? stringToprint : "(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}

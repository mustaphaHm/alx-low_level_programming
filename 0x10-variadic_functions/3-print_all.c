#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_all - function that prints anuthing
 * @format: const param
 * ...: lsit of params
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";
	va_list list;

	va_start(list, format);
	if (format != NULL)
	{
		while (format[i] != NULL)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(lis, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(lis, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(lis, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = "";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: number of time the _ should be printed
 */
void print_line(int n)
{
	int lenght;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lenght = 1; lenght <= n; lenght++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

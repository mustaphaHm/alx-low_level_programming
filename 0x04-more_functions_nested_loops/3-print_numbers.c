#include "main.h"
/**
 * print_numbers - print 0 - 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_most_numbers - print 0 - 9 except 2 and 4
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + 48);
			n++;
		}
	}
	_putchar('\n');
}

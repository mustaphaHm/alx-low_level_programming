#include "main.h"
/**
 * print_numbers
 *
 * Return: prints numbers from 0 to 9
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

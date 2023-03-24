#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: number of time the \ should be printed
 */
void print_diagonal(int n)
{
	int lenght, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lenght = 1; lenght <= n; lenght++)
		{
			for (spaces = 1; spaces <= lenght; spaces++)
				_putchar(' ');
			_putchar('\\');/*is equal to '\' char*/
			_putchar('\n');
		}
	}
}

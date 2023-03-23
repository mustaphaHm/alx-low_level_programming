#include "main.h"
/**
 * more_numbers - prints more numnbers
 */

void more_numbers(void)
{
	int row, num;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar (num % 10 + '0');
		}
		_putchar('\n');
	}
}

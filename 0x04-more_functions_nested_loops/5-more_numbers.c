#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i = 0;
	int a;

	while (i <= 9)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + 48);
		}
		i++;
		_putchar('\n');
	}
}

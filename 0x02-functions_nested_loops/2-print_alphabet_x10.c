#include "main.h"
/**
 * print_alphabet_x10 - print ten time the alphabets in lowercase
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int counter = 0;

	while (counter <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		counter++;
	}
}

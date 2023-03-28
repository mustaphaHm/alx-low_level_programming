#include "main.h"
/**
 * print_rev - print a string in revrse
 *
 * @s: parametre de type char
 * Return: Always 0
 */
void print_rev(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
	}
	while (lenght--)
	{
		_putchar(s[lenght]);
	}
	_putchar('\n');
}

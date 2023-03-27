#include "main.h"
/**
 * _puts - print a string to stdout
 *
 * @str: parametre de type char
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(i + 0);
	}
	_putchar('\n');
}

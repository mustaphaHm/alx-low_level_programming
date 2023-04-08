#include "main.h"
/**
 * _puts - print a string to stdout
 *
 * @str: parametre de type char
 * Return: Always 0
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

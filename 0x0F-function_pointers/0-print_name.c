#include "function_pointers.h"
/**
 * f - function that prints a name
 * @name: char pointer
 * Return: void
 */
void f(char *name)
{
	while (*name)
	{
		putchar(*name);
		name++;
	}
}
/**
 * print_name - function that prints a name
 * @name: char pointer
 * @f: pointer to a function called f
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

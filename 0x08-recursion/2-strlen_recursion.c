#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string
 *@s: character parameter
 *Return: integer
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght = lenght + _strlen_recursion(s + 1);
	}
	return (lenght);
}

#include "main.h"
/**
 * _strlen - return the lenght of a string
 *
 * @s: parametre de type char
 * Return: the leghnt of a string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

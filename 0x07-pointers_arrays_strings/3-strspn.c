#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s: a string variable
 *@accept: character
 *Return: unsigned
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght = 0;
	unsigned int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				lenght++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (lenght);
		}
	}
	return (lenght);
}

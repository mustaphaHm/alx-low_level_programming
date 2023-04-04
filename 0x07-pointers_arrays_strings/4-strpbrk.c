#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
	}
	return ('\0');
}


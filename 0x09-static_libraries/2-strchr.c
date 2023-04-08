#include "main.h"
/**
 *_strchr - function that locates a character in a string
 *@s: a string variable
 *@c: character to locates in teh string
 *Return: char
 */
char *_strchr(char *s, char c)
{
	int cr;

	for (cr = 0; s[cr] >= '\0'; cr++)
		if (s[cr] == c)
		{
			return (s + cr);
		}
	return ('\0');
}

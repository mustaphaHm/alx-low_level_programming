#include "main.h"
/**
 *string_toupper - change all lowercase to upper case
 *@s: string parameter
 * Return: string on uppercase
 */
char *string_toupper(char *s)
{
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

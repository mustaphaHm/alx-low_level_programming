#include "main.h"
/**
 *_strcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s2[count] != '\0'; count++)
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]); 
	return (0);

}

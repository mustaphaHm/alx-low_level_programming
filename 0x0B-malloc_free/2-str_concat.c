#include "main.h"
#include "stdlib.h"
#include "string.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int lenghtS1, lenghtS2, lenghtOfTwoStrings, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenghtS1 = strlen(s1);
	lenghtS2 = strlen(s2);
	lenghtOfTwoStrings = lenghtS1 + lenghtS2;
	ar = malloc((lenghtOfTwoStrings + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < lenghtS1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < (lenghtOfTwoStrings - lenghtS1); i++)
	{
		ar[lenghtS1 + i] = s2[i];
	}
	return (ar);
}

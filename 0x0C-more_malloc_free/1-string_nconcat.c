#include "main.h"
#include "stdlib.h"
#include "string.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: positive integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lenghtS1, lenghtS2, lenght;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenghtS1 = strlen(s1);
	lenghtS2 = strlen(s2);
	if (n >= lenghtS2)
		lenght = lenghtS2;
	else
		lenght = n;
	ptr = malloc(lenghtS1 + lenght + 1);
	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, lenghtS1);
	memcpy(ptr + lenghtS1, s2, lenght);
	ptr[lenghtS1 + lenght] = '\0';
	return (ptr);
}

#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: first string
 * @src: Second string
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int lenghtDest = 0;
	int lenghtSrc = 0;

	while (dest[lenghtDest] != '\0')
		lenghtDest++;
	while (src[lenghtSrc] != '\0')
	{
		dest[lenghtDest] = src[lenghtSrc];
		lenghtDest++;
		lenghtSrc++;
	}
	dest[lenghtDest] = '\0';
	return (dest);
}

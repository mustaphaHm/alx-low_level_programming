#include "main.h"
/**
 **_strncat - concatenates two strings
 *
 * @dest: first string
 * @src: Second string
 * @n: integer
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenghtDest = 0;
	int lenghtSrc = 0;

	while (dest[lenghtDest] != '\0')
		lenghtDest++;
	while (src[lenghtSrc] != '\0' && src[lenghtSrc] < n)
	{
		dest[lenghtDest] = src[lenghtSrc];
		lenghtDest++;
		lenghtSrc++;
	}
	if (lenghtDest > n)
		dest[lenghtDest] = '\0';
	return (dest);
}

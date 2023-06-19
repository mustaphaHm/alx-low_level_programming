#include "main.h"
/**
 **_strncpy - Copy a string
 *
 * @dest: first string
 * @src: Second string
 * @n: integer
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	for ( ; count < n; count++)
		dest[count] = '\0';
	return (dest);
}

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
	int i;

	while (dest[lenghtDest] != '\0')
		lenghtDest++;
	for (i = 0; i < lenghtDest; i++)
	{
		_putchar(dest[i]);
		if (i == lenghtDest)
		{
			int lenghtSrc = 0;
			int j;

			while (src[lenghtSrc] != '\0')
				lenghtSrc++;
			for (j = 0; j < lenghtSrc; j++)
				_putchar(src[j]);
		}
	}
	_putchar('\n');
}

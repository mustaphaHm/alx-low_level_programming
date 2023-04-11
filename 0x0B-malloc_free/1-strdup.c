#include "main.h"
#include "stdlib.h"
#include "string.h"
/**
 *_strdup - function returns pointer to a newly allocated sp in mem
 *@str: string parameter
 *Return: char
 */
char *_strdup(char *str)
{
	char *ar;
	int i, lenghtStr;

	if (str == NULL)
		return (NULL);
	lenghtStr = strlen(str);
	ar = malloc((lenghtStr + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < lenghtStr; i++)
		ar[i] = str[i];
	/*free(ar);*/
	return (ar);
}

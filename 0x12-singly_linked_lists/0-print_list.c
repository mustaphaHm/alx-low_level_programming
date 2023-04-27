#include "lists.h"
/**
 * LenghtOfStr - get the lenght of a string
 * @s: string parameters
 * Return: int the lenght of the string
 */
int LenghtOfStr(char *s)
{
	int lenght = 0;

	if (!s)
		return (0);
	while (*s++)
		lenght++;
	return (lenght);
}
/**
 * print_list - prints a linked list
 * @h: pointer to the first node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t lenght = 0;

	while (h)
	{
		printf("[%d] %s\n", LenghtOfStr(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		lenght++;
	}
	return (lenght);
}

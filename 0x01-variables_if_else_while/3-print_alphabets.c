#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	char l;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}

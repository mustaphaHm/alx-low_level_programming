#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int b;

	for (n = 0; n < 9; n++)
	{
		putchar(n + 48);
	}
	for (b = 0; b < 6; b++)
	{
		putchar(b + 97);
	}
	putchar('\n');
	return (0);
}

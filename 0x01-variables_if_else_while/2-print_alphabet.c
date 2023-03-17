#include<stdio.h>
/**
 * main - Entry point
 * Discription: 'print characters from a to z'
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	return (0);
}

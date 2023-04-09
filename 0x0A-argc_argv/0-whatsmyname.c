#include "stdio.h"
/**
 * main - function that print the programme name
 * @argc: the number of arguments passed to main
 * @argv: array of arguments passed to main
 * Return: integer
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

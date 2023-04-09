#include "stdio.h"
/**
 * main - function that prints the number of arguments passed to main
 * @argc: int number of arguments passed to main
 * @argv: array that contains all parametrs passed to main
 * Return: integer
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

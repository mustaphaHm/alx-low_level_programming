#include "stdio.h"
/**
 * main - function that prints all arguments passed to main
 * @argc: the nimber of parameters passed to main
 * @argv: array that contains all parameters passed to main
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

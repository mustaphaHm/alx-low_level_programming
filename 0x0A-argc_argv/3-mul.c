#include "stdio.h"
#include "stdlib.h"
/**
 * main - function that print the multiplication of two numbers
 * @argc: the number of parameters passed to main
 * @argv: array that contains the parametrs passed to main
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_SUCCESS);
}

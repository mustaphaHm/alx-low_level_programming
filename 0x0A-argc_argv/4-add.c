#include "stdio.h"
#include "stdlib.h"
/**
 * main - function that adds positive numbers
 * @argc: the numbers of aparametrs passed to main
 * @argv: array that contains the parameters passed to the main
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > '0' && *argv[i] < '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		/*if (onlyDigits == 1)*/
		/*{*/
		printf("%d\n", sum);
		/*}*/
	}
	return (0);
}
